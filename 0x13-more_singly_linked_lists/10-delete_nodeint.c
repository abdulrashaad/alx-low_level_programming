#include "lists.h"

/**
 * delete_nodeint_at_index - Remove node from linked list at specified index
 * @head: Pointer to the initial element in the list
 * @index: Index indicating the node to be deleted
 * Return: 1 (passed), otherwise -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tube = *head;
	listint_t *you = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tube);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tube || !(tube->next))
			return (-1);
		tube = tube->next;
		x++;
	}


	you = tube->next;
	tube->next = you->next;
	free(you);

	return (1);
}
