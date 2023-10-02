#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to read files for text
 * @filename: read text file
 * @letters: letters involving numbers to be read
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f;
	ssize_t d;
	ssize_t wu;
	ssize_t tu;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	f = malloc(sizeof(char) * letters);
	tu = read(d, f, letters);
	wu = write(STDOUT_FILENO, f, tu);

	free(f);
	close(d);
	return (wu);
}
