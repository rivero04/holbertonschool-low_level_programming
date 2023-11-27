#include "lists.h"
/**
 * insert_dnodeint_at_index - function with three arguments
 * @h: pointer to doubly linked list
 * @idx: index position to insert node
 * @n: value of new node
 *
 * Description: inserting new node into a doubly linked list
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;

	while (idx > 1 && current_node && current_node->next)
	{
		current_node = current_node->next;
		idx--;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx > 1 || current_node == NULL)
		return (NULL);

	new_node->n = n;

	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
