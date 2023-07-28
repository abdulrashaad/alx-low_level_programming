#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - include new node at the end of linked list
 * @head: functions as double pointer to the list_t list
 * @str: string to put in the new node or address
 * Return: address of the new element, otherwise null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w;
	list_t *tp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);

	w->str = strdup(str);
	w->len = len;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = w;

	return (w);
}
