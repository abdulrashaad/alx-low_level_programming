#include <stdlib.h>
#include "lists.h"

/**
 * free_list - funtion to free link list
 * @head: list_t freed
 */

void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
