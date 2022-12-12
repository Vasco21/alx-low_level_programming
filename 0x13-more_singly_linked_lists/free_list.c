/*
 * Auth: Vasco Eti
 */

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
