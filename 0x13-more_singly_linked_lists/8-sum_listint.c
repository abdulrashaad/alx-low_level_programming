#include "lists.h"

/**
 * sum_listint -  sum up  all data in a listint_t list program
 * @head: 1st node in linked list
 * Return: rsults of calculated sum
 */

int sum_listint(listint_t *head)
{
	int twe = 0;
	listint_t *kote = head;

	for (; kote; kote = kote->next)
	{
		twe += kote->n;
	}

	return (twe);
}
