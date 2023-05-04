#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
	{
		return (0);
	}
	char *p = b;

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
