/*
 * File: 1-alphabet.c
 * Auth: Vasco Eti
 */

#include "main.h"

/**
 * Numbers must be separated by a comma, followed by a space
 * function that prints all natural numbers from n to 98, followed by a new line.
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
