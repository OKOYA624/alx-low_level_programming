#include "main.h"
/**
* print_binary - prints
* @dec: number to print in binary
*/
void print_binary(unsigned long int dec)
{
	int position, number = 0;
	unsigned long int existing_bit;

	for (position = 63; position >= 0; position--)
	{
		existing_bit = dec >> position;

		if (existing_bit & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}

