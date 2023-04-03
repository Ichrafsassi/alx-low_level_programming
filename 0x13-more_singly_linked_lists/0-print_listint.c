#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @k: head of linklist node (named k in the program could change,normal)
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *k)
{
	size_t count = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		k = k->next;
		count++;
	}
	return (count);
}
