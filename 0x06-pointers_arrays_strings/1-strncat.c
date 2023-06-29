#include "main.h"

/**
 * _strncat - funtion  concatenate two strings
 * @dest: value input
 * @src: value input
 * @n: value n input
 * Return: dest passed
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
