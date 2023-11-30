#include "hash_tables.h"
/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table to prints
  *
  * Return: ...
  */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *current_node;
    char aux = 0;

    if (ht == NULL || ht->array == NULL)
        return;
    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        current_node = ht->array[i];

        while (current_node != NULL)
        {
            if (aux == 1)
                printf(", ");
            printf("'%s': '%s'", current_node->key, current_node->value);
            aux = 1;
            current_node = current_node->next;
        }
    }
    printf("}\n");
}
