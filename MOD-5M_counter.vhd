
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity MOD_5M_counter is
	Port(
		CLK: in std_logic;
		RST: in std_logic;
		EN: in std_logic;
		CT: out std_logic_vector(22 downto 0)
	
	);

end MOD_5M_counter;

architecture Behavioral of MOD_5M_counter IS 
	
Signal count : std_logic_vector(22 downto 0);

begin

	process(CLK,RST) 
		begin 
			if RST = '1' then 
				count<=(others=>'0');
			elsif CLK'event and CLK ='1' and EN = '1' then
				if count="10011000100101100111111" then
					count <= "00000000000000000000000";
				else 
					count<= count +1;
				end if;
			end if;
	end process;
	
	CT<= count;
	
	
end Behavioral;

