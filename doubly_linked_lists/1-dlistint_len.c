#include "lists.h"
/**
 * dlistint_len - count the elements in the list
 * @h: start point of the list
 * Return: number of the elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}

	return (count);

}
