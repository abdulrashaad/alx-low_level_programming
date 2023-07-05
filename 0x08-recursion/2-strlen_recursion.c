#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: measured string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int rash = 0;

	if (*s)
	{
		rash++;
		rash += _strlen_recursion(s + 1);
	}
	return (rash);
}
