#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameters
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;

	int y = 0;

	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;
	for (y = 0; y < x; y++, x--)
	{
		temp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) =
/**
 *
