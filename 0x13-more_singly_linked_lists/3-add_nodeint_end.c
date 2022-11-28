#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of listint_t list
 * @n: integer the new node contains
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
