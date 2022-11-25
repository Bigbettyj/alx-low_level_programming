#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: the head of list_t list
 * Return: always 0
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
