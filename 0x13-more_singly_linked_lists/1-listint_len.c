#include "lists.h"

/**
 * listint_len - funcion returns element number in a linked lists
 * @h: linked list of type listint_t for traversion
 * Return: nodes in the program
 */

size_t listint_len(const listint_t *h)
{
	size_t rash;

	for (rash = 0; h; h = h->next)
	{
		rash++;
	}

	return (rash);
}
