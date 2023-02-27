#include "main.h"
/**
* _strlen - returns the string length
*@s : string
* Return : returns
*/
int _strlen(char *s)
{
int len =  0;
while (*(s + len) != ‘\n’)
len++;
return (len);
}
