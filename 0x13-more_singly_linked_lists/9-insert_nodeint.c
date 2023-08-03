#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a linked list program
 * @head: pointer to 1st node in the list in program
 * @idx: index where the new node addition is made
 * @n: data to insert in new node in program
 * Return: pointer to the new node else null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int abi;
	listint_t *nana;
	listint_t *tube = *head;

	nana = malloc(sizeof(listint_t));
	if (!nana || !head)
		return (NULL);

	nana->n = n;
	nana->next = NULL;

	if (idx == 0)
	{
		nana->next = *head;
		*head = nana;
		return (nana);
	}

	for (abi = 0; tube && abi < idx; abi++)
	{
		if (abi == idx - 1)
		{
			nana->next = tube->next;
			tube->next = nana;
			return (nana);
		}
		else
			tube = tube->next;
	}

	return (NULL);
}
