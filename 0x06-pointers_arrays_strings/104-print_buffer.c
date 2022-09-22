/*
 * File: print_buffer.c
 * Auth: Vasco Eti
 */

#include "main.h"
#include <stdio.h>

/**
 * position_line - prints a s bytes of a buffer
 * @x: buffer to print
 * @s: bytes of buffer to print
 * @y: line of buffer to print
 *
 * Return: void
 */

void position_line(char *x, int s, int y)
{
	int j, i;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", x[y * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (i = 0; i <= s; i++)
	{
		if (x[y * 10 + i] > 31 && x[y * 10 + i] < 127)
			putchar(x[y * 10 + i]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
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
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
