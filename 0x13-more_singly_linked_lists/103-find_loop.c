#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoisee, *hare;

	tortoisee = hare = head;
	while (tortoisee && hare && hare->next)
	{
		tortoisee = tortoisee->next;
		hare = hare->next->next;
		if (tortoisee == hare)
		{
			tortoisee = head;
			break;
		}
	}
	if (!tortoisee || !hare || !hare->next)
		return (NULL);
	while (tortoisee != hare)
	{
		tortoisee = tortoisee->next;
		hare = hare->next;
	}
	return (hare);
}
