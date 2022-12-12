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
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		printf("%c", lower);
	printf("\n");

	return (0);
}
