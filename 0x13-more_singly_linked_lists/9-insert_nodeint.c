#include "lists.h"

/**
 * insert_nodeint_at_index - ll
 * @head: head of a no
 * @idx: index of the list where the new node
 * @n: integer element.
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nw;
	listint_t *h;

	h = *head;
	if (h == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && h != NULL; x++)
		{
			h = h->next;
		}
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
	}
	else
	{
		nw->next = h->next;
		h->next = nw;
	}

	return (nw);
}
