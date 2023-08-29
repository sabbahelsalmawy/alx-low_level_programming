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
	listint_t *curr_nod;

	if (head != NULL)
	{
		curr_nod = *head;
		while ((tmp = curr_nod) != NULL)
		{
			curr_nod = curr_nod->next;
			free(tmp);
		}
		*head = NULL;
	}
}
