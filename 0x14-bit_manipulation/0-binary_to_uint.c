#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - Converts
* @b: A pointer to a string
* Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dig = 0;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] == '0')
			dig = dig << 1;
		else if (b[n] == '1')
			dig = (dig << 1) | 1;
		else
			return (0);
	}

	return (dig);
}
