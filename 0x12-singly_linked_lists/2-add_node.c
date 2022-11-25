#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list_t list
 * @str: string to copy
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t cchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cchar = 0; str[cchar];)
		cchar++;
	new->len = cchar;
	new->next = *head;
	*head = new;

	return (*head);
}
