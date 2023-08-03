#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - number of unique nodes is counted
 * @head: pointer to the head of function listint_t for check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tatty, *hell;
	size_t pussy = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tatty = head->next;
	hell = (head->next)->next;

	while (hell)
	{
		if (tatty == hell)
		{
			tatty = hell;
			while (tatty != hell)
			{
				pussy++;
				tatty = tatty->next;
				hell = hell->next;
			}

			tatty = tatty->next;
			while (tatty != hell)
			{
				pussy++;
				tatty = tatty->next;
			}

			return (pussy);
		}

		tatty = tatty->next;
		hell = (hell->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - outputs a listint_t in safe list
 * @head: pointer to the head of listint_t list in program
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t pussy, meet = 0;

	pussy = looped_listint_len(head);

	if (pussy == 0)
	{
		for (; head != NULL; pussy++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (meet = 0; meet < pussy; meet++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (pussy);
}
