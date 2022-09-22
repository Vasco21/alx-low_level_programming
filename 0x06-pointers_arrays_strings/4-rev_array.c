/*
 * File: rev_array.c
 * Auth: Vasco Eti 
 */

#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	for (int i=0, j=n-1; i < j; i++, j--)
	{
		int temp = a[i]; 
		a[i] = [j];
		a[j] = temp;
	}
}
