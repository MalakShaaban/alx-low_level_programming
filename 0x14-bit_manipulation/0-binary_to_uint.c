#include "main.h"

/**
*  binary_to_unit - to convert a binary digit to an unsigned integer
* @b: a string containing a binary number
*
*Return: the b containing an unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
