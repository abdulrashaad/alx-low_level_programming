#include "lists.h"

/**
 * reverse_listint - Inverts the order of a linked list
 * @head: Pointer to the initial node in the list
 * Return: Pointer to the initial node in the newly created list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *next = NULL;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = v;
		v = *head;

	}

	*head = v;

	return (*head);
}
