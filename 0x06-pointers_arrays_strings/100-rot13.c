/*
 * File:rot23.c
 *Auth: Vasco Eti
 */

#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int i;

	for (i=0; i<strlen(s); i++)
	{
		 if ((*s >= 'a' && *s < 'n') || (*s >= 'A' && *s < 'N'))
			 *S += 13;
		 else
			 *s -+ 13;
	}
}
