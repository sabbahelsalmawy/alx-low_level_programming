#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no++;
	}
	return (no);
}
