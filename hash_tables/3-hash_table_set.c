#include "hash_tables.h"

/**
  * hash_table_set - Adds an element to the hash table
  * @ht: The hash table to add or update the key/value to
  * @key: The key of a value
  * @value: The value associated with the key
  *
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *current_node = NULL, *new_entry = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[i];

	if (current_node && strcmp(key, current_node->key) == 0)
	{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
	}

	new_entry = malloc(sizeof(hash_node_t));

	if (new_entry == NULL)
		return (0);

	new_entry->key = strdup(key);
	new_entry->value = strdup(value);
	new_entry->next = ht->array[i];
	ht->array[i] = new_entry;
	return (1);
}
