#include "main.h"

/**
* flip_bits - Counts the number of flips to make two numbers equal
* @n: First number
* @m: Second number
* Return: Unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n || m)
	{
		flips += (n & 1) != (m & 1);
		n >>= 1;
		m >>= 1;
	}

	return (flips);
}
