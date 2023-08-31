#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Binary number as a string
* Return: Unsigned Integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;

		if (*b == '1')
			result += 1;

		b++;
	}

	return (result);
}
