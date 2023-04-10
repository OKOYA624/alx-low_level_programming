#include "main.h"

/**
* set_bit - Sets the value of a bit at a given position to 1.
*
* @digit: A pointer to the number to modify.
* @position: The position of the bit to set to 1.
*
* Return: 1 on success, or -1 on failure.
*/
int set_bit(unsigned long int *digit, unsigned int position)
{
	if (position > 63)
		return (-1);

	*digit |= (1UL << position);
	return (1);
}

