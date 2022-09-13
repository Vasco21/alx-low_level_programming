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
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		printf(d);
	for (low = 'a'; low <= 'f'; low++)
		printf("%c", low);
	printf("\n");

	return (0);
}
