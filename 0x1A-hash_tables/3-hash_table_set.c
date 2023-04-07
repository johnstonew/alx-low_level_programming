#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the table
 * key: key to add
 * value: the value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current_node;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = hash_djb2((const unsigned char *)key) % ht->size;

    current_node = ht->array[index];
    while (current_node != NULL)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value);
            current_node->value = strdup(value);
            return (1);
        }
        current_node = current_node->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
