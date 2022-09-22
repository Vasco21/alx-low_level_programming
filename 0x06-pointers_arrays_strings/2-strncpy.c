#include "main.h"

/*
 * Filie: strncpy.c
 * Auth: Vasco Eti
 */


/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
