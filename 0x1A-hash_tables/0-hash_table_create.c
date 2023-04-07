#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_t - hastable function
 *
 * Return: Returns a pointer to the newly created hash table
 */




hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;

    hash_table_t* ht = (hash_table_t*)malloc(sizeof(hash_table_t));
    if (ht == NULL) {
        return NULL;
    }

    ht->array = (hash_node_t**)malloc(sizeof(hash_node_t*) * size);

    if (ht->array == NULL) {
        return NULL;
    }

    for (i = 0; i < size; i++) {
        ht->array[i] = NULL;
    }

    ht->size = size;

    return ht;
}
