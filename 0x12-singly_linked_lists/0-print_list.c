#include <stdio.h>
#include "lists.h"

/**
 * print_list - outputs what the link list contains
 * @h: Pointer to what kind of list to be produced
 * Return: Amount of number in nodes to be listed (succesful)
 */

size_t print_list(const list_t *h)
{
	size_t rash = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		rash++;
	}

	return (rash);
}
