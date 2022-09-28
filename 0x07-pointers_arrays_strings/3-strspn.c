

/*
 * File: Strspn.c
 * Auth: Vasco Eti
 */ 

#include <unistd.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, x;
	char *str = accept;

	while (*s)
	{
		x = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				x = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = str;
		if (x == 0)
			break;
	}
	return (count);
}
