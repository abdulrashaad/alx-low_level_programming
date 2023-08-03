#include "lists.h"

/**
 * find_listint_loop - indicate loop in a linked list
 * @head: linked list to check for in program
 * Return: memory addres node where the loop starts,
 * otherwise null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pass = head;
	listint_t *fail = head;

	if (!head)
		return (NULL);

	while (pass && fail && fail->next)
	{
		fail = fail->next->next;
		pass = fail->next;
		if (fail == pass)
		{
			pass = head;
			while (pass != fail)
			{
				pass = pass->next;
				fail = fail->next;
			}
			return (fail);
		}
	}

	return (NULL);
}
