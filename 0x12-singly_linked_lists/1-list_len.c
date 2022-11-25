#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != 0)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
