#include "hash_tables.h"
/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = NULL;
	hash_node_t **array = NULL;

	hash_table = malloc(sizeof(hash_node_t *) * size);

	if (hash_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
		return (NULL);

	for (i < size; i++);
		array[i] = NULL;

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
