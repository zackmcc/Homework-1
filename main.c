/*
	-- ECE 532 Homework 1
	-- File: main.c
	-- Date: 23 SEP 2018
	-- Author: Zackary McClamma

*/

#include <stdio.h>
#include "counter.h"

int main()
{
  printf("Hello from Nios II!\n");
  while (1)
  {
	  for(int i = 0; i < 10; i++)
	  {
		  displayNumber(i);
		  printf("Button = %d\n", get_button());
		  delay(DELAY);

	  }
  }

  return 0;
}

void displayNumber(int num)
{
	int *gpio0 = GPIO_0_BASE;
	int *gpio1 = GPIO_1_BASE;
	int *gpio2 = GPIO_2_BASE;
	int *gpio3 = GPIO_3_BASE;
	int *gpio4 = GPIO_4_BASE;
	int *gpio5 = GPIO_5_BASE;
	int *gpio6 = GPIO_6_BASE;

	*gpio0 = 0x01;
	*gpio1 = 0x01;
	*gpio2 = 0x01;
	*gpio3 = 0x01;
	*gpio4 = 0x01;
	*gpio5 = 0x01;
	*gpio6 = 0x01;

	switch(num)
	{
	case 0:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		*gpio3 = 0x00;
		*gpio4 = 0x00;
		*gpio5 = 0x00;
		return;
	case 1:
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		return;
	case 2:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio3 = 0x00;
		*gpio4 = 0x00;
		*gpio6 = 0x00;
		return;
	case 3:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		*gpio3 = 0x00;
		*gpio6 = 0x00;
		return;
	case 4:
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		*gpio5 = 0x00;
		*gpio6 = 0x00;
		return;
	case 5:
		*gpio0 = 0x00;
		*gpio2 = 0x00;
		*gpio3 = 0x00;
		*gpio5 = 0x00;
		*gpio6 = 0x00;
		return;
	case 6:
		*gpio0 = 0x00;
		*gpio2 = 0x00;
		*gpio3 = 0x00;
		*gpio4 = 0x00;
		*gpio5 = 0x00;
		*gpio6 = 0x00;
		return;
	case 7:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		return;
	case 8:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		*gpio3 = 0x00;
		*gpio4 = 0x00;
		*gpio5 = 0x00;
		*gpio6 = 0x00;
		return;
	case 9:
		*gpio0 = 0x00;
		*gpio1 = 0x00;
		*gpio2 = 0x00;
		*gpio5 = 0x00;
		*gpio6 = 0x00;
		return;
	}
}

void delay (unsigned int n){
	for(unsigned int i=0;i<n;i++);
}

unsigned int get_button(void){
	gpio_regs *gr = BUTTON_BASE;

	return(gr->data);
}
