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
    hash_table_t* ptr = (hash_table_t*) malloc(sizeof(hash_table_t));
    unsigned long int i;

	if (ptr == NULL)
		return (NULL);
 
    ptr->size = size;
    ptr->array = malloc(sizeof(hash_node_t *) * size);
    
    if (ptr->array == NULL)
        return NULL;

    for (i=0; i < size; i++)
        ptr->array[i] = NULL;

    return ptr;
}
