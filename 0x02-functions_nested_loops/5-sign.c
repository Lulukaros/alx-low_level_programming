#include "main.h"
/**
*print_sign - checks for sign of a number
*@n: the number to be checked
*Return: 1 if positive, 0 if 0, -1 if negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (5);
}
