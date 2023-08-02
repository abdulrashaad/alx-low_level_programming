#include "lists.h"

/**
 * add_nodeint - new node addition at the start of linked list
 * @head: pointer to 1st node in the list in the program
 * @n: data for insertion in new node in the program
 * Return: pointer to the new node, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start = malloc(sizeof(listint_t));

	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
