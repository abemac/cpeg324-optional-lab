-- Benjamin Steenkamer and Abraham McIlvaine
-- CPEG 324-010
-- Lab 3: Single Cycle Calculator in VHDL - calculator.vhdl
-- 5/3/17
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity calculator is
  port(
    I : in std_logic_vector(7 downto 0); --instruction input
    CLK : in std_logic;
	 BTN : in std_logic;
	 ANODES: out std_logic_vector(3 downto 0);
	 SSD: out std_logic_vector(6 downto 0)
	 --DEBUG_LED: out std_logic
  );
end entity calculator;


architecture structural of calculator is

	component Debounce is
	  port (
		 CLK : in  STD_LOGIC;
		 btn_in : in  STD_LOGIC;
		 db_btn : out  STD_LOGIC
	  );
	end component;
	
  component addsub_8bit is
      port(
          input_a, input_b : in std_logic_vector(7 downto 0);
          addsub_sel : in std_logic; --0 = addition, 1 is subtraction.
          sum : out std_logic_vector(7 downto 0)
        );
  end component addsub_8bit;
  
  
  component reg_file is
    port(
      RA : in std_logic_vector(1 downto 0);
      RB : in std_logic_vector(1 downto 0);
      RW : in std_logic_vector(1 downto 0);
      WD : in std_logic_vector(7 downto 0);
      CLK : in std_logic;
      WE : in std_logic;
      RA_data : out std_logic_vector(7 downto 0);
      RB_data : out std_logic_vector(7 downto 0)
    );
  end component reg_file;

  component clk_filter is
    port(
      clk_in : in std_logic;
      clk_out : out std_logic;
      S: in std_logic;
      trigger: in std_logic
    );
  end component clk_filter;
  
  component MOD_32768_divider is port(
		CLK : in  STD_LOGIC;
      CLK2 : out  STD_LOGIC
	);
	end component;
	component MOD_4_counter is port(
		CLK : in  STD_LOGIC;
      CNT : out  STD_LOGIC_VECTOR (1 downto 0)
	);
	end component;
	component BCD_decoder is port(
		BCD : in  STD_LOGIC_VECTOR (3 downto 0);
      SSD : out  STD_LOGIC_VECTOR (6 downto 0)
	);
	end component;

signal filtered_clk, WE, display, WD_sel, trigger, cmp_out : std_logic;
signal RA, RB, RW : std_logic_vector(1 downto 0);
signal WD, RA_data, RB_data, sign_ext_imm, ALU_out: std_logic_vector(7 downto 0);

SIGNAL lsd : std_logic_vector(3 downto 0) := "0000";
SIGNAL lsd2 : std_logic_vector(3 downto 0 ) := "1110";
SIGNAL msd2 : std_logic_vector(3 downto 0) :="1110";
SIGNAL msd : std_logic_vector(3 downto 0) :="1110";
SIGNAL thisBCD : std_logic_vector(3 downto 0);

SIGNAL CLK_1500_Hz : std_logic :='0';
SIGNAL selSeg : std_logic_vector(1 downto 0);
signal debounced_btn : std_logic;

begin
  reg_file_0 : reg_file port map(RA, RB, RW, WD, filtered_clk, WE, RA_data, RB_data);
  ALU: addsub_8bit port map(RA_data, RB_data, I(7), ALU_out);
  clk_filter_0 : clk_filter port map(debounced_btn, filtered_clk, I(4), trigger);
  debouncer : Debounce port map(CLK,BTN,debounced_btn);
  --DEBUG_LED<=filtered_clk;
	FiftyMHzTO1500Hz : MOD_32768_divider port map(
		CLK => CLK,
		CLK2=>CLK_1500_Hz
	
	);
	selector: MOD_4_counter port map(
		CLK =>CLK_1500_Hz,
		CNT => selSeg
	);
	
	BCDtoSSD : BCD_decoder port map(
		BCD => thisBCD,
		SSD => SSD
	);
	
  --Assign and/or create control singals route instructions.
  --See datapath schematic.
  RB <= I(1 downto 0);
  RW <= I(5 downto 4);

  --Print regesiter control signal.
  display <= not (I(7) or I(6) or I(5));

  with display select RA <=
    I(3 downto 2) when '0',
    I(4 downto 3) when others;

  --Sign extedend the immediate value.
  sign_ext_imm(3 downto 0) <= I(3 downto 0);
  with I(3) select sign_ext_imm(7 downto 4) <=
    "1111" when '1',
    "0000" when others;

  --Select whether signed extedend immediate value or ALU results to written to RW.
  WD_sel <= not(I(7) and I(6));
  with WD_sel select WD <=
    sign_ext_imm when '0',
    ALU_out when others;

  --Is WD written to RW?
  WE <= I(7) or I(6);

  --Used to trigger the skip instruction logic.
  trigger <= (not I(7)) and (not I(6)) and I(5) and cmp_out;

  --Compare the value of the two registers; cmp_out is 1 if they are equal.
  cmp_out <= (RA_data(7) xnor RB_data(7)) and
            (RA_data(6) xnor RB_data(6)) and
            (RA_data(5) xnor RB_data(5)) and
            (RA_data(4) xnor RB_data(4)) and
            (RA_data(3) xnor RB_data(3)) and
            (RA_data(2) xnor RB_data(2)) and
            (RA_data(1) xnor RB_data(1)) and
            (RA_data(0) xnor RB_data(0));


	with selSeg select ANODES<=
		"1110" when "00",
		"1101" when "01",
		"1011" when "10",
		"0111" when "11",
		"1111" when others;
	
	with selSeg select thisBCD<=
		lsd when "00",
		lsd2 when "01",
		msd2 when "10",
		msd when "11",
		"1111" when others;



  --The display function
  process(filtered_clk,display) is
	variable int_val : integer;

	variable off : std_logic_vector(3 downto 0):="1110";
	variable neg_sign : std_logic_vector(3 downto 0):="1111";
	variable ones :std_logic_vector(3 downto 0);
	variable tens :std_logic_vector(3 downto 0);
	variable hundreds :std_logic_vector(3 downto 0);
	variable bcd : UNSIGNED (11 downto 0) := (others => '0');
	variable temp : STD_LOGIC_VECTOR (7 downto 0);
    begin
      if((filtered_clk'event and filtered_clk = '1') and (display = '1')) then
			 int_val := to_integer(signed(RA_data));
			 bcd := (others => '0');
			 if(int_val>=0) then
				temp(7 downto 0):=std_logic_vector(to_unsigned(int_val,8));
			 else
				temp(7 downto 0):=std_logic_vector(to_unsigned(-int_val,8));
			 end if;
			 for i in 0 to 7 loop
				if bcd(3 downto 0) > 4 then 
				  bcd(3 downto 0) := bcd(3 downto 0) + 3;
				end if;
				if bcd(7 downto 4) > 4 then 
				  bcd(7 downto 4) := bcd(7 downto 4) + 3;
				end if;
				if bcd(11 downto 8) > 4 then  
				  bcd(11 downto 8) := bcd(11 downto 8) + 3;
				end if;
				bcd := bcd(10 downto 0) & temp(7);
				temp := temp(6 downto 0) & '0';
			 end loop;
		 
			 ones:=std_logic_vector(bcd(3 downto 0));
			 tens:=std_logic_vector(bcd(7 downto 4));
			 hundreds:=std_logic_vector(bcd(11 downto 8));
        --Make the ouput right aligned.
        if(int_val >= 0) then
          if(int_val < 10) then
            msd<=off;
				msd2<=off;
				lsd2<=off;
				lsd<=ones;
          elsif(int_val < 100) then
            msd<=off;
				msd2<=off;
				lsd2<=tens;
				lsd<=ones;
          else
            msd<=off;
				msd2<=hundreds;
				lsd2<=tens;
				lsd<=ones;
          end if;
        else --Display value is negative
          if(int_val > -10) then
            msd<=off;
				msd2<=off;
				lsd2<=neg_sign;
				lsd<=ones;
          elsif(int_val > -100) then
            msd<=off;
				msd2<=neg_sign;
				lsd2<=tens;
				lsd<=ones;
          else
            msd<=neg_sign;
				msd2<=hundreds;
				lsd2<=tens;
				lsd<=ones;
          end if;
        end if;
      end if;
  end process;
end architecture structural;
