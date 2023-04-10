#include "main.h"

/**
* clear_bit - Sets the value 
* @number: A pointer 
* @number_position: The pos
* Return: 1 on success
*/
int clear_bit(unsigned long int *number, unsigned int number_position)
{
	if (number_position > 63)
		return (-1);

	*number &= ~(1UL << number_position);
	return (1);
}
