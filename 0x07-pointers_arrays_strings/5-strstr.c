#include "main.h"
/**
 * _strstr - point of entery
 * @haystack: insert
 * @needle: insert
 * Return: return always 0 (passed)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *bar = haystack;

		char *p = needle;

		while (*bar == *p && *p != '\0')
		{
			bar++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
