#include "main.h"

/**
 * append_text_to_file - text append at the end file.
 * @filename:  pointer  name of file
 * @text_content: string to add to end of file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ox, wu, en = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (en = 0; text_content[en];)
			en++;
	}

	ox = open(filename, O_WRONLY | O_APPEND);
	wu = write(ox, text_content, en);

	if (ox == -1 || wu == -1)
		return (-1);

	close(ox);

	return (1);
}
