

/*
 * File: 101-natural.c
* Auth: Vasco Eti
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */

#include <stdio.h>

int main ( void )
{
	int sum = 0;

	for (int i = 0; i < 1000; i += 5)
	{
		sum += i;
	}
    	for (int i = 0; i < 1000; i += 3)
	{
		if (i % 5) sum += i;  /* already counted */
    	}
	printf("%d\n", sum);
	
	return 0;
}
