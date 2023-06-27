#include "main.h"

/**
 * char *_strcpy - function that copies string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int r = 0;

	int h = 0;

	while (*(src + 1) != '\0')
	{
		r++;
	}
	for ( ; h < 1; h++)
	{
		dest[h] = src[h];
	}
	dest[r] = '\0';
	return (dest);
}
