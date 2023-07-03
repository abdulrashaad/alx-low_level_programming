#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: initiating address of memory
 * @b: desired value
 * @n: changed number of bytes
 * Return: array changed involving n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
