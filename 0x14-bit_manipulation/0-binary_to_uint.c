#include "main.h"

/**
* binary_to_uint - converts
* @b: string
* Return: the changed number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit;
	unsigned int answer  = 0;

	if (!b)
		return (0);

	for (digit = 0; b[digit]; digit++)
	{
		if (b[digit] < '0' || b[digit] > '1')
			return (0);
		answer = 2 * answer + (b[digit] - '0');
	}

	return (answer);
}
