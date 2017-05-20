library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity MOD_32768_divider is
    Port ( CLK : in  STD_LOGIC;
           CLK2 : out  STD_LOGIC);
end MOD_32768_divider;

architecture Behavioral of MOD_32768_divider is

Signal count : std_logic_vector (14 downto 0):=(others=>'0');
begin
process (CLK)
	begin
		if CLK'event and CLK = '1' then
			count <= count +1;
			if count = "000000000000000" then
				CLK2<= '1';
			else
				CLK2<= '0';
			end if;
		end if;
		
	end process;



end Behavioral;



