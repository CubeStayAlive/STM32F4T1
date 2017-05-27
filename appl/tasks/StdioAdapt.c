/*
 * StdioAdapt.c
 *
 *  Created on: 10.05.2017
 *      Author: manni1user
 */

#include <stdio.h>

extern int __io_putchar(int ch) __attribute__((weak));
extern int __io_getchar(void) __attribute__((weak));


int __io_putchar(int ch)
{
	int i = 9;
	i = i * 3;
	return(0);
}

int __io_getchar(void)
{
	return(EOF);
}
