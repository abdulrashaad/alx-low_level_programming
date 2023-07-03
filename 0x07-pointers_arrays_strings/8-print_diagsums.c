#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - point of entry
 * @a: insert
 * @size: insert
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int suma, sumb, c;

	suma = 0;

	sumb = 0;

	for (c = 0; c < size; c++)
	{
		suma = suma + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		sumb += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
