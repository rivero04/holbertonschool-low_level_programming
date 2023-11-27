#include "lists.h"
/**
* add_node_end - add a node at the end
* @head: pointer to first node
* @str: string
* Return: pointer to list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	size_t lent = 0;
	list_t *new_node, *temp;

	if (str == NULL)
	{
		return (NULL); }

	while (str[lent] != '\0')
	{
		lent++; }

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL); }

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL); }

	new_node->len = lent;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node); }
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next; }
	temp->next = new_node;

	return (new_node);
}
