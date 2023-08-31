#include "main.h"

/**
* print_binary - Prints binary representation of number
* @n: Number parameter
* Return: Void
*/

void print_binary(unsigned long int n)
{
	unsigned long int ans = 0;
	unsigned int zeroes = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (!(n & 1))
	{
		zeroes++;
		n >>= 1;
	}

	while (n > 0)
	{
		ans += (n & 1);
		n >>= 1;

		if (n)
			ans <<= 1;
	}

	while (ans > 0)
	{
		_putchar((ans & 1) + '0');
		ans >>= 1;
	}

	while (zeroes > 0)
	{
		_putchar('0');
		zeroes--;
	}
}
