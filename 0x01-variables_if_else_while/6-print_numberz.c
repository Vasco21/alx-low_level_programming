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
	int n = 1024;
	
	while(n != 0)
	{
		int d = n % 10;
		n = n / 10;
		write(1, &d, 1);
	}

	return (0);
}
