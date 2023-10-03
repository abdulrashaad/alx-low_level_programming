#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cb(char *f);
void cf(int d);

/**
 * cb -  1024 bytes are allocaed for a buffer.
 * @f: name of file to store the buffer file
 * Return: pointer to new buffer
 */

char *cb(char *f)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (!b)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (b);
}

/**
 * cf - Close file
 * @d: closed file descriptor
 */

void cf(int d)
{
	int x;

	x = close(d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies content of file
 * @ac: number of arguments
 * @av: array of pointers
 * Return: 0
 * Description: argument description
 */

int main(int ac, char *av[])
{
	int fr, tuo, ru, wu;
	char *b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = cb(av[2]);
	fr = open(av[1], O_RDONLY);
	ru = read(fr, b, 1024);
	tuo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || ru == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(b);
			exit(98);
		}

		wu = write(tuo, b, ru);
		if (tuo == -1 || wu == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(b);
			exit(99);
		}

		ru = read(fr, b, 1024);
		tuo = open(av[2], O_WRONLY | O_APPEND);

	} while (ru > 0);

	free(b);
	cf(fr);
	cf(tuo);

	return (0);
}
