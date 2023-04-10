#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 *
 * @number: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, or -1 on failure.
 */
int clear_bit(unsigned long int *number, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*number &= ~(1UL << index);
	return (1);
}

