#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL; /* Initialize the head of the sorted linked list */

    return (ht);
}

/**
 * shash_table_set - Inserts a key/value pair into a sorted hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    /* Check if key already exists, update value if it does */
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* Key doesn't exist, create a new node */
    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert into the sorted linked list */
    shash_list_insert(&(ht->shead), new_node);

    /* Insert into the hash table array */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

/**
 * shash_list_insert - Inserts a node into a sorted linked list.
 * @head: A pointer to the head of the linked list.
 * @new_node: The new node to be inserted.
 */
void shash_list_insert(shash_node_t **head, shash_node_t *new_node)
{
    shash_node_t *current, *prev;

    if (*head == NULL || strcmp((*head)->key, new_node->key) > 0)
    {
        new_node->snext = *head;
        *head = new_node;
        return;
    }

    current = *head;
    while (current != NULL && strcmp(current->key, new_node->key) < 0)
    {
        prev = current;
        current = current->snext;
    }

    prev->snext = new_node;
    new_node->snext = current;
}

/**
 * shash_table_get - Retrieves the value associated with a key in a sorted hash table.
 * @ht: The hash table.
 * @key: The key string.
 *
 * Return: The value associated with the key, or NULL if key not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        first = 0;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        first = 0;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            temp = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = temp;
        }
    }

    free(ht->array);
    free(ht);
}
