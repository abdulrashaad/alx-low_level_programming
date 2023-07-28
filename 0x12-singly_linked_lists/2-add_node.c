#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - sum new node from starting point of a linked list
 * @head: double pointer of linked list
 * @str: the new string to be added to the node
 * Return: address of the new element, if it fails then null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *yo;
	unsigned int len = 0;

	while (str[len])
		len++;

	yo = malloc(sizeof(list_t));
	if (!yo)
		return (NULL);

	yo->str = strdup(str);
	yo->len = len;
	yo->next = (*head);
	(*head) = yo;

	return (*head);
}
