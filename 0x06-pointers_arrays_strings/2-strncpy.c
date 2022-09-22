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
	int i;

	i = 0;

	while (src[i] && i > n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
