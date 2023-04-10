#include "main.h"
/**
* clear_bit - Sets the value
* @digit: A pointer to the number to modify.
* @index: The index
* Return: 1 on success, or -1 on failure.
*/
int clear_bit(unsigned long int *digit, unsigned int index)
{
	if (index > 63)
		return (-1);

	*digit &= ~(1UL << index);
	return (1);
}

