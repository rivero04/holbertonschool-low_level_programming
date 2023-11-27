#include "lists.h"

/**
 * delete_dnodeint_at_index - function with two arguments
 * @head: pointer to double linked list
 * @index: index position to delete node
 *
 * Description: delete node at index position
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;

	if (!head)
		return (-1);

	if (head)
	{
		while (index && current_node)
		{
			current_node = current_node->next;
			index--;
		}

		if (index)
			return (-1);

		if (!index && current_node)
		{
			if (current_node->next)
				current_node->next->prev = current_node->prev;

			if (current_node->prev)
				current_node->prev->next = current_node->next;
			else
				*head = current_node->next;

			free(current_node);
			return (1);
		}
	}

	return (-1);
}
