#include "main.h"

/*
 * File: strcat.c
 * Auth: Vasco Eti
 */

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */


char *_strcat(char *dest, char *src)
{
	char *letter = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (letter);
}
