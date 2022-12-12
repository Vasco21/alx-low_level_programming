#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Vasco Eti
 * Desc: Header file containing declarations for all functions
 *       used in the 0x02-functions_nested_loops directory.
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
