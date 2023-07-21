#include "function_pointers.h"

/**
 * int_index - return index place if comparable
 * @array: array to show
 * @size: the size of elements in array
 * @cmp: pointer to function  of one of the 3 in main
 * Return: 0 (passed)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
