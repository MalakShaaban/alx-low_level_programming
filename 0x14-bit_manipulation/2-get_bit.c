#include "main.h"

/**
 * get_bit - return the value of a bit at an indx in the decimal form
 * @n: num to search of
 * @index: indx of the bit
 *
 * Return:the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
