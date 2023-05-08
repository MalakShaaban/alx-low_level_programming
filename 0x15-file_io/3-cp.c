#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - checks if files can be opened.
 * create_buffer - Allocates 1024 bytes for each buffer.
 *
 * @filefrom: file_from.
 * @fileto: file_to.
 * @argv: arguments vector.
 * Return: there is no return type.
 */
void error_file(int filefrom, int fileto, char *argv[])
{
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc:the number of arguments.
 * @argv:the arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, error_close;
	ssize_t n_chars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	filefrom = open(argv[1], O_RDONLY);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(filefrom, fileto, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(filefrom, buff, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(fileto, buff, n_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	error_close = close(filefrom);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}

	error_close = close(fileto);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
