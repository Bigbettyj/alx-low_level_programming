#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 * Return: pointer to the first node of the reversed list
 */
stint_t *reverse_listint(listint_t **head)
{
	listint_t n, m;

	n = NULL;
	m = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = n;
	}
	*head = m;
	return (*head);
}
