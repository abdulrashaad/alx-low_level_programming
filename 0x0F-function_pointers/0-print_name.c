#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - output name with pointer to function
 * @name: string inclusion
 * @f: pointer to function used
 * Return: nothing void (passed)
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
