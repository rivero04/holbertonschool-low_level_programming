#include "lists.h"
/**
 * list_len - calculate the lenght of the list
 * Return: lenght
 * @h: list firts pointer
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}

	return (count);

}
