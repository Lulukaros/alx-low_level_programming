#include "main.h"
/**
*_islower - Checks for lowercase characters
*@c: the character to be checked
*Return: 1 if lowercase, 0 if otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
