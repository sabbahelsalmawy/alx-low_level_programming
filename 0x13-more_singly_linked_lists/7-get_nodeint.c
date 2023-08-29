#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index of the node.
 * @head: it is a node nth of task
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l;

	for (l = 0; l < index && head != NULL; l++)
	{
		head = head->next;
	}

	return (head);
}
