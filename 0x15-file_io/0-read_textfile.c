#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Funtion to read text file and output to STDOUT
 * @filename: file name of text file to be read
 * @letters: letter numbers to be read
 * Return:  number of bytes read and printed 0 otherwise fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t f;
	ssize_t wet;
	ssize_t tof;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	tof = read(f, x, letters);
	wet = write(STDOUT_FILENO, x, tof);

	free(x);
	close(f);
	return (wet);
}
