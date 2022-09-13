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
	int ch;

	/* print uppercase letters */
	for (ch= ‘A’; ch<= ‘Z’; ch++)
		putchar(ch);
	 	putchar(‘\n’);
	/* print lowercase letters */
	for (ch= ‘a’; ch<= ‘z’; ch++)
		putchar(ch);
		putchar(‘\n’);

	return (0);

}
