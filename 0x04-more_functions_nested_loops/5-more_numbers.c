#include "main.h"
/**
* more_numbers - prints
*
*Return: void
*
*/

void more_numbers(void)
{int num, a;
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0';)
}
_putchar('\n')
}
