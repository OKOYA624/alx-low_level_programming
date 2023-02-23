#include "main.h"
/**
*  _isupper - checks for uppercase character
* @c: is the parameter
* Return: 1
*/
int _isupper(int c)
{
int i;

	for (i = "A"; i = "Z"; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
