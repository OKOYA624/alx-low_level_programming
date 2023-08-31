#include "main.h"

/**
* set_bit - Sets the bit of number at an index
* @n: Number parameter to set bit
* @index: Index to set bit
* Return: Integer
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	/* Shifts 1 to the index bit*/
	*n |= (1 << index);

	return (1);
}
