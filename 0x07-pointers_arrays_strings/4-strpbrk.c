#include "main.h"
/**
 * _strpbrk - point of entry
 * @s: insert
 * @accept: insert
 * Return: return always 0 (passed)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
