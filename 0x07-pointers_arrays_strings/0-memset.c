/*
 * File: _memset.c
 * Auth: Vasco Eti
 */

#include "main.h"

/*
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char   *placeholder;

	placeholder = (unsigned char *)s;
	while (n > 0)
	{
		*placeholder = (unsigned char)b;
		placeholder++;
		n++;
	}
	return (s)
}
