#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the pointer to head of linked list
 * Return: The address of the node where the loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pptr1, *pptr2;

	pptr1 = head;
	pptr2 = head;
	while (head && pptr1 && pptr1->next)
	{
		head = head->next;
		pptr1 = pptr1->next->next;

		if (head == pptr1)
		{
			head = pptr2;
			pptr2 = pptr1;
			while (1)
			{
				pptr1 = pptr2;
				while (pptr1->next != head && pptr1->next != pptr2)
				{
					pptr1 = pptr1->next;
				}
				if (pptr1->next == head)
					break;
				head = head->next;
			}
			return (pptr1->next);
		}
	}
	return (NULL);
}
