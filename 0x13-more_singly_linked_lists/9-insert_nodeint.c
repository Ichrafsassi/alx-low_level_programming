#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @index: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	if (index != 0)
	{
		tmp = *head;
		for (i = 0; i < index - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
