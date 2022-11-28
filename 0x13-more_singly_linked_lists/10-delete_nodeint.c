#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t list.
 * @index: is the index of the node that should be deleted
 * @head: pointer to the head of listint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *h;
	unsigned int node;

	*h = *head;
	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (h->next == NULL)
			return (-1);
		h = h->next;
	}
	temp = h->next;
	h->next = temp->next;
	free(temp);
	return (1);
}
