#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: head
 *
 * Return: the address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt;
	listint_t *pr;

	pt = head;
	pr = head;
	while (head && pt && pt->next)
	{
		head = head->next;
		pt = pt->next->next;

		if (head == pt)
		{
			head = pr;
			pr =  pt;
			while (1)
			{
				pt = pr;
				while (pt->next != head && pt->next != pr)
				{
					pt = pt->next;
				}
				if (pt->next == head)
					break;

				head = head->next;
			}
			return (pt->next);
		}
	}

	return (NULL);
}
