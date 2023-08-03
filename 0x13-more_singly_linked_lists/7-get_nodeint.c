#include "lists.h"

/**
 * get_nodeint_at_index - return node at certain index in a linked list
 * in the program
 * @head: 1st node in the linked list program
 * @index: index of node for return in linked list in program
 * Return: pointer to the node in search for otherwise null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *xamp = head;

	for (; xamp && a < index; a++)
	{
		xamp = xamp->next;
	}

	return (xamp ? xamp : NULL);
}
