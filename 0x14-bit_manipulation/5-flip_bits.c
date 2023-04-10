#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int position, number = 0;
unsigned long int current_bit;
unsigned long int allowed_bits = n ^ m;

for (position = 63; position >= 0; position--)
{
current_bit = allowed_bits >> position;
if (current_bit & 1)
number++;
}

return (number);
}

