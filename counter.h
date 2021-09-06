/*
	-- ECE 532 Homework 1
	-- File: counter.h
	-- Date: 23 SEP 2018
	-- Author: Zackary McClamma

*/

#ifndef COUNTER_H_
#define COUNTER_H_

#endif /* COUNTER_H_ */

#define GPIO_0_BASE 0x30000
#define GPIO_1_BASE 0x40000
#define GPIO_2_BASE 0x50000
#define GPIO_3_BASE 0x60000
#define GPIO_4_BASE 0x70000
#define GPIO_5_BASE 0x80000
#define GPIO_6_BASE 0x90000
#define BUTTON_BASE 0xB0000
#define DELAY 500000

typedef struct gr{
	unsigned int data;
	unsigned int dir;
	unsigned int intmask;
	unsigned int edge;
	unsigned int outset;
	unsigned int outclear;
} gpio_regs;

void displayNumber(int number);
void delay(unsigned int n);
unsigned int get_button(void);
