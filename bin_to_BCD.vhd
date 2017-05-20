----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:45:03 05/20/2017 
-- Design Name: 
-- Module Name:    bin_to_BCD - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity bin_to_BCD is
    Port ( binary : in  STD_LOGIC_VECTOR (7 downto 0);
			  enable : in STD_LOGIC;
           hundreds : out  STD_LOGIC;
           tens : out  STD_LOGIC;
           ones : out  STD_LOGIC);
end bin_to_BCD;

architecture Behavioral of bin_to_BCD is
component adder_8bit is
    port(input_a, input_b : in std_logic_vector(7 downto 0);
         sum : out std_logic_vector(7 downto 0));
end component adder_8bit;

signal three : std_logic_vector(7 downto 0):="00000011";

begin
adder_8bit_0: adder_8bit port map(input_a, three, sum);

process(enable) is 
begin
	if(enable='1') then
		
	end if;
end process;

end Behavioral;

