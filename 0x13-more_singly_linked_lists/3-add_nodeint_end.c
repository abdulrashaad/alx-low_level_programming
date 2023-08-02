#include "lists.h"

/**
 * add_nodeint_end - addition of node at end of a linked list
 * @head: pointer for first element in the list in program
 * @n: data for insertion in new element
 * Return: pointer for new node, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (y->next)
		y = y->next;

	y->next = x;

	return (x);
}
