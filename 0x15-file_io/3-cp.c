#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocation of 1024 bytes for buffer
 * @file: name of the file buffer to store chars
 * Return: A pointer allocated buffer.
 */

char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - Closing file descriptor
 * @fd: closed file descriptor
 */

void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - for copying contents offile into another
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0
 * Description: the argument count.
 */

int main(int argc, char *argv[])
{
	int f, t, ar, aw;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	ar = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || ar == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		aw = write(t, b, ar);
		if (t == -1 || aw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		ar = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (ar > 0);

	free(b);
	close_file(f);
	close_file(t);

	return (0);
}
