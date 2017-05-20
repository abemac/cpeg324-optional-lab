library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity MOD_4_counter is
    Port ( CLK : in  STD_LOGIC;
           CNT : out  STD_LOGIC_VECTOR (1 downto 0));
end MOD_4_counter;

architecture Behavioral of MOD_4_counter is

Signal count: std_logic_vector(1 downto 0) := "00";

begin

	process(CLK)
	begin
		if CLK'event and CLK = '1' then
			count <= count + 1;
		end if;
	end process;
	
	CNT <=count;

end Behavioral;

