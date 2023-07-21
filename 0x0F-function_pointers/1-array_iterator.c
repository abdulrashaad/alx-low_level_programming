#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - outputs each array element on a newline
 * @array: array to show
 * @size: how many element to output
 * @action: pointer to print in regular or hexagon
 * Return: void (passed)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
