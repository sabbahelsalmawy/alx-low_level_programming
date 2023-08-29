#include "lists.h"

/**
 * free_listint_safe - frees
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int dif;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
