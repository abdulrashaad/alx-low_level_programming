#include "main.h"
/**
 * print_array - function that prints elements of array
 * @a: array name
 * @n: number of elements in array to be printed
 * Return; a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d,", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
