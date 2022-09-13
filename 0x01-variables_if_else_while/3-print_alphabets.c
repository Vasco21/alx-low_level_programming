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
	char c;

	if (c == 'U' || c == 'u')
	{
		for(c = 'A'; <= 'Z'; ++c)
			printf("%c", c);
	}else if (c == 'L' || c == 'l')
	{
		for(c = 'a'; c <= 'z'; ++c)
			printf("%c", c);
	}else{
		print("Error Char");
	}
	return (0)
}
