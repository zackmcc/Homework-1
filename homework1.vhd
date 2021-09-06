-- ECE532 HW1 
-- File: homework1.vhd
-- Author: Zackary McClamma
-- Date: 23-Sep-2019

library ieee;
  use ieee.std_logic_1164.all;

entity homework1 is
  port
  (
    i_clk     : in    std_logic;
    i_rst_n   : in    std_logic;
	 gpio0 : out std_logic;
	 gpio1 : out std_logic;
	 gpio2 : out std_logic;
	 gpio3 : out std_logic;
	 gpio4 : out std_logic;
	 gpio5 : out std_logic;
	 gpio6 : out std_logic;
	 i_button : in std_logic;
	 o_led : out std_logic
	 
  );
end homework1;

architecture sch of homework1 is

  component homework1_cpu is
  port (
    clk_clk       : in std_logic;
    reset_reset_n : in std_logic;
	 gpio0_export : out std_logic;
	 gpio1_export : out std_logic;
	 gpio2_export : out std_logic;
	 gpio3_export : out std_logic;
	 gpio4_export : out std_logic;
	 gpio5_export : out std_logic;
	 gpio6_export : out std_logic;
	 button_export : in std_logic;
	 led_export		: out std_logic
  );
  end component homework1_cpu;
  
  signal w_led	: std_logic;
  
begin

	o_led <= w_led;

  u0 : component homework1_cpu
	port map 
  (
    clk_clk       => i_clk,
    reset_reset_n => i_rst_n,
	 gpio0_export => gpio0,
	 gpio1_export => gpio1,
	 gpio2_export => gpio2,
	 gpio3_export => gpio3,
	 gpio4_export => gpio4,
	 gpio5_export => gpio5,
	 gpio6_export => gpio6,
	 button_export => i_button,
	 led_export		=> w_led
  );

end sch;
