#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - write the char c to stdout
 * @c: The char that will bw printed
 *
 * Return: On success return 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
