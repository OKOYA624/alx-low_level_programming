#include <stdio.h>
#include "main.h"
/**
*puts2 - prints
*@str: string
*
*Return: nothing
*/
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\n')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}
