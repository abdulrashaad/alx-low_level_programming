#include "lists.h"

/**
 * free_listint - function frees  linked list
 * @head: list of list_int to be freed in program
 */

void free_listint(listint_t *head)
{
	listint_t *zee;

	for (; head; head = zee)
	{
		zee = head->next;
		free(head);
	}
}
