#include "hash_tables.h"
/**
  * hash_table_delete - Deletes a hash table
  * @ht: The hash table to frees
  *
  * Return: ...
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *current_node = NULL;

	if (ht && ht->size && ht->array)
		{
			for (; i < ht->size; ++i)
			{
				node = ht->array[i];

				if (node)
				{
					if (node->next)
					{
						node = node->next;
						while (node)
						{
							current_node = node;
							node = node->next;
							free(current_node->key);
							free(current_node->value);
							free(current_node);
						}
					}

					node = ht->array[i];
					if (node->key && node->value)
					{
						free(node->key);
						free(node->value);
					}
				}

				free(node);
			}

			free(ht->array);
			free(ht);
		}
}
