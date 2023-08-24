#include "lists.h"

/**
 * add_node_end - adds a new node
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tp;
	size_t nch;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nch = 0; str[nch]; nch++)
		;

	new->len = nch;
	new->next = NULL;
	tp = *head;

	if (tp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = new;
	}

	return (*head);
}
