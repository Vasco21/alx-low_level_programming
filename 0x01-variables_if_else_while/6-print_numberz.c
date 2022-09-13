#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, k, i;

	for (i = 0; n != 0; i++)
	{
		k = n % 10;
		printf("\n%d", k);
		n = n / 10;
	}

	return (0);
}
