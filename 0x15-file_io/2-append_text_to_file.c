#include "main.h"

/**
 * append_text_to_file -to append text at the end of the file.
 * @filename: A pointer that points to the name of the file.
 * @text_content: string to append to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist write - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_open = open(filename, O_WRONLY | O_APPEND);
	n = write(f_open, text_content, len);

	if (f_open == -1 || n == -1)
		return (-1);

	close(f_open);

	return (1);
}
