#include "main.h"

/**
* get_bit - Gets the bit of number at an index
* @n: Number parameter to retrieve bit from
* @index: Index to retrive bit
* Return: Integer
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	/* Shifts index bits of n to the right*/
	return ((n >> index) & 1);
}
