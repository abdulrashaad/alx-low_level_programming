#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: represents string
 * *Return: codes returns length
 */

int _strlen(char *s)
{
	int rash = 0;

	while (*s != '\0')
	{
		rash++;
		s++;
	}
	return (rash);
}
