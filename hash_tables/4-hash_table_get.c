#include "hash_tables.h"
/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: The hash table to look into
  * @key: The key to finding
  *
  * Return: The value associated with the element
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;

	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);
	element = ht->array[i];

	if (element == NULL)
		return (NULL);

	while (strcmp(key, element->key) != 0)
		element = element->next;

	return (element->value);
}
