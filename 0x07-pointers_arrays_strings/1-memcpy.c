#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: bytes number
 * Return: changed bytes of nfrom copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;

	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
