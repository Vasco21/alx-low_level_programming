/*
 * File: 1-alphabet.c
 * Auth: Vasco Eti
 */

#include "main.h"


/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, x;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			x = num * mult;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}