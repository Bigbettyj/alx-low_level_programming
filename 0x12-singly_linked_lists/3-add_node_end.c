#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list_t list
 * @str: string to be copied
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t cchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (cchar = 0; str[cchar];)
		cchar++;
	new->len = cchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
