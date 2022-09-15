/*
 * File: 1-alphabet.c
 * Auth: Vasco Eti
 */

#include "main.h"

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int  i;
	int total = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total += 1;
	}
	printf("%d\n", total);

	return (0);
}
