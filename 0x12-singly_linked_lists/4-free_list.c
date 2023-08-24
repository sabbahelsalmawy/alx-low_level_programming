#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *curt;

	while ((curt = head) != NULL)
	{
		head = head->next;
		free(curt->str);
		free(curt);
	}
}
