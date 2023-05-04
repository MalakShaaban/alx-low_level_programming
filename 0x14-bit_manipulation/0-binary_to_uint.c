#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	const char *p = b;

	if (b == NULL)
	{
		return (0);
	}

	while (*p != '0')
	{
		if (*p == '0' || *p == '1')
		{
			r <<= 1;
			r += *p - '0';
		}
		else
		{
			return (0);
		}
		p++;
	}
	return (r);
}
