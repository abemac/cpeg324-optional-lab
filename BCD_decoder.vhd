library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BCD_decoder is
    Port ( BCD : in  STD_LOGIC_VECTOR (3 downto 0);
           SSD : out  STD_LOGIC_VECTOR (7 downto 0));
end BCD_decoder;

architecture Behavioral of BCD_decoder is

begin
	
	with BCD select SSD<=
		"00000011" when "0000",
		"10011111" when "0001",
		"00100101" when "0010",
		"00001101" when "0011",
		"10011001" when "0100",
		"01001001" when "0101",
		"01000001" when "0110",
		"00011111" when "0111",
		"00000001" when "1000",
		"00001001" when "1001",
		"11111101" when "1111",
		"11111111" when  others;
	


end Behavioral;

