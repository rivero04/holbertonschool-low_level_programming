#include "lists.h"
/**
 * print_dlistint - print the elements in the list
 * @h: the start of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
