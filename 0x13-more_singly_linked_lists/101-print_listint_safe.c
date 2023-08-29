#include "lists.h"

/**
 * free_listp - frees a linked
 * @head: head of a list.
 *
 * Return: no
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *cr;

	if (head != NULL)
	{
		cr = *head;
		while ((tmp = cr) != NULL)
		{
			cr = cr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints
 * @head: head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd = 0;
	listp_t *hr, *new, *add;

	hr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hr;
		hr = new;

		add = hr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hr);
				return (nd);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nd++;
	}

	free_listp(&hr);
	return (nd);
}
