#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int hn;
	listint_t *h;
	listint_t *curr_nod;

	if (*head == NULL)
		return (0);

	curr_nod = *head;

	hn = curr_nod->n;

	h = curr_nod->next;

	free(curr_nod);

	*head = h;

	return (hn);
}
