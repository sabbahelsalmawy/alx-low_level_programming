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
	unsigned int e;
	listint_t *new_nd;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (e = 0; e < idx - 1 && h != NULL; e++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;

	if (idx == 0)
	{
		new_nd->next = *head;
		*head = new_nd;
	}
	else
	{
		new_nd->next = h->next;
		h->next = new_nd;
	}

	return (new_nd);
}
