#include "main.h"
#include <stdio.h>

/**
 * print_binary -  it prints the binary equivalent of a decimal digit
 * @n: num that prints in binary
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
int counter = 0;
	unsigned long int cur_num;

	for (i = 63; i >= 0; i--)
	{
		cur_num = n >> i;

		if (cur_num & 1)
		{
			putchar('1');
			counter++;
		}
		else if (counter)
			putchar('0');
	}
	if (!counter)
		putchar('0');
}
