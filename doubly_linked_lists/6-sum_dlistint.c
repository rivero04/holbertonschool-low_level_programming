#include "lists.h"
/**
 * sum_dlistint - function with one argument
 * @head: head to pointer to double linked list
 *
 * Description: returns the sum off all the data(n)
 *
 * Return: 0 if empty or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
