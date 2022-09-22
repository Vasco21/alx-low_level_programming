#include "main.h"
#include <stdio.h>

/*
 * File: print_buffter.c
 * Auth: Vasco Eti
 */

/**
 * position_line - bytes a of buffer
 * @x: buffer to print
 * @s: bytes of buffter to print
 * @y: line of buffter to print
 * Return: void
 */

void position_line(char *x, int s, int y)
{
	int i, k;
	
	for (i = 0; i <= 9; i++)
	{
		if (i <= s)
			printf("%02x", x[y * 10 + i]);
		else
			printf("  ");
		if(i % 2)
			putchar('  ');
	}
	for (k = 0; k <= s; k++)
	{
		if (x[k * 10 + k] > 31 && x[y * 10 + k] < 127)
			putchar(x[y * 10 + k]);
		else 
			putchar('.');
	}
}

/**
 * print_buffer -  prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			position_line(b, 9, i);
		}
		else
		{
			position_line(b, size % 10 - 1, i);
		}
		putchar9'\n');
	}
	if (size == 0)
		putchar('\n');
}
