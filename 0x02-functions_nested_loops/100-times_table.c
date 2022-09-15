/*
 * File: 1-alphabet.c
 * Auth: Vasco Eti
 */

#include "main.h"

/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int j, i, n;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar("%dx%d = %d, ",j,i,i*j)
		}
		_putchar("\n")
	}
}
