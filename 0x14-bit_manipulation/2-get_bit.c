#include "main.h"

/**
* get_bit - returns the value
* @number: number
* @position: pos
* Return: value of the bit
*/
int get_bit(unsigned long int number, unsigned int position)
{
	int digit;

	if (position > 63)
		return (-1);

	digit = (number >> position) & 1;

	return (digit);
}
