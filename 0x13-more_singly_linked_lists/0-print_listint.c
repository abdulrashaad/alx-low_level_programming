#include "lists.h"

/**
 * print_listint - outputs elements of a linked list in program
 * @h: linked list of type listint_t for program ouput
 * Return: nodes number in program
 */

size_t print_listint(const listint_t *h)
{
	size_t rashard = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		rashard++;
	}

	return (rashard);
}
