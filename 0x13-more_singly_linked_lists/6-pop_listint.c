#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: the head node of listint_t list
 * Return: return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);
	temp = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (a);
}
