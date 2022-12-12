#include <stdio.h>
#include "main.h"


/*
 * File: print_number.c
 * Auth: Vasco Eti
 */

/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int res, len, num;

	num = 1;

	if (n >= 0)
		res = n * -1;
	else
	{
		res = n;
		_putchar('-');
	}

	len = res;
	while (len <= -10)
	{
		num *= 10;
		len /= 10;
	}
	
	while (num >= 1)
	{
		_putchar(((res / num) % 10) * -1 + '0');
		num /= 10;
	}
}
