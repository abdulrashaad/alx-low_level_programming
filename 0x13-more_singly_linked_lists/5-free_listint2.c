#include "lists.h"

/**
 * free_listint2 -function frees linked list in program
 * @head: pointer for listint_t list to be freed in program
 */

void free_listint2(listint_t **head)
{
	listint_t *zee;

	if (head == NULL)
		return;

	for (; *head; *head = zee)
	{
		zee = (*head)->next;
		free(*head);
	}
}
