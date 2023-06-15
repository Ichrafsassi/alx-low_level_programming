#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *emp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((emp = head) != NULL)
	{
		head = head->next;
		free(emp);
	}
}
