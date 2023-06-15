#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int compt;

	compt = 0;
	if (h == NULL)
		return (compt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		compt++;
		h = h->next;
	}
	return (compt);
}
