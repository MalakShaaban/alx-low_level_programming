#include "main.h"

/**
 * flip_bits -to count the number of bits to be changed
 * to get from one num to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: the num of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int  counter = 0;
	unsigned long int xor_v = n ^ m;

	while (xor_v)
	{
		if (xor_v & 1ul)
			counter++;
		xor_v = xor_v >> 1;
	}
	return (counter);
}
