#include "main.h"

/**
* print_line - prints 0 to 14
*@n: the number of '_'
* Return: Always 0.
*/
void print_line(int n)
{
int len;
if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');

}
