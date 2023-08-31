#include "main.h"

/**
* clear_bit - Clears the bit of number at an index
* @n: Number parameter to clear bit
* @index: Index to clear bit
* Return: Integer
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	/* Shifts 1 to the index bit*/
	*n &= ~(1 << index);

	return (1);
}
