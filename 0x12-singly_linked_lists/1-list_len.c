#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function counts elements in a linked list
 * @h: function receives a pointer to a linked list of type
 * Return: amount of elements
 */

size_t list_len(const list_t *h)
{
	size_t rash = 0;

	for (; h; h = h->next)
		rash++;
	return (rash);
}
