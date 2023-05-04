#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		putchar ('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}

	for (; i >= 0; i--)
	{
		putchar((n >> i) & 1 ? '1' : '0');
	}
}
