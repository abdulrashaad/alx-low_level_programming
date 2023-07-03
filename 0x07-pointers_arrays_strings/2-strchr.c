#include "main.h"
/**
 * _strchr - point of entry
 * @s: insert
 * @c: insert
 * Return: return 0 always (passed)
 */

char *_strchr(char *s, char c)
{
	int rashaad = 0;

	for (; s[rashaad] >= '\0'; rashaad++)
	{
		if (s[rashaad] == c)
			return (&s[rashaad]);
	}
	return (0);
}
