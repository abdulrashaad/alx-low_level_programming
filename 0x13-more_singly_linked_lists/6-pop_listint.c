#include "lists.h"

/**
 * pop_listint - deletion of  the head node of a linked list
 * in a program
 * @head: pointer of  1st element in the linked list program
 * Return: the data that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *xamp;
	int zee;

	if (head == NULL || *head == NULL)
		return (0);

	zee = (*head)->n;
	xamp = (*head)->next;
	free(*head);
	*head = xamp;

	return (zee);
}
