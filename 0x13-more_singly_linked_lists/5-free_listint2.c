#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr-nod;

	if (head != NULL)
	{
		curr-nod = *head;
		while ((tmp = curr-nod) != NULL)
		{
			curr-nod = curr-nod->next;
			free(tmp);
		}
		*head = NULL;
	}
}
