#include "main.h"

/**
 * set_bit - to set a bit at a given indx to 1
 * @n:a pointer to the number to be changed
 * @index: indx of the bit to set  1
 *
 * Return: 1 for success, -1 for errors
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
