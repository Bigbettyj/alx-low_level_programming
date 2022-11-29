#include "lists.h"
/**
 * free_list_safe2 - frees a linked list
 * @head: the hea of list_t list
 * Return: Always 0
 */
void free_list_safe2(list_t **head)
{
	list_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head of listint_t list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	list_t *new, *pptr, *add;
	listint_t *curr;

	pptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = pptr;
		pptr = new;

		add = pptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list_safe2(&pptr);
				return (node);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		node++;
	}
	*h = NULL;
	free_list_safe2(&pptr);
	return (node);
}
