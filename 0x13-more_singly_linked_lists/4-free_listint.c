#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of listint_t list
 * Return:Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
