#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of listint_t list
 * @idx: the index of the list where the new node should be added
 * @n: integer the node contains
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;
	unsigned int node;

	*h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);
		h = h->next;
	}
	new->next = h->next;
	h->next = new;

	return (new);
}
