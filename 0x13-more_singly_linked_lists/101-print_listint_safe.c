#include "lists.h"
/**
 * free_list_safe - frees list_t list
 * @head: head of the list_t list
 * Return: Always 0
 */
void free_list_safe(list_t **head)
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
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	list_t *new, *pptr, *add;

	pptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = pptr;
		pptr = new;

		add = pptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_safe(&pptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_list_safe(&pptr);
	return (node);
}
