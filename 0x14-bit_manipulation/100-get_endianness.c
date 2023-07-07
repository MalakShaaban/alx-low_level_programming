#include "main.h"

/**
 * get_endianness -to check if a machine is small or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned long int e = 1;

	return (*(char *)&e);
}
