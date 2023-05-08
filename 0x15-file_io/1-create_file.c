#include "main.h"

/**
 * @filename: A pointer to the name of the file we will make.
 * @text_content: A pointer to the string that will be written in the file.
 *
 * create_file - Creates a file.
 * Return: If the function failed - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, len_t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_t = 0; text_content[len_t];)
			len_t++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, len_t);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
