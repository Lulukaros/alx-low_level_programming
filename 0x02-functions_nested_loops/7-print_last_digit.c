#include "main.h"
/**
*print_last_digit - returns the last digit
*@a: the number that needs to be checked
*Return: the last digit of a number
*/
int print_last_digit(int a)
{
int e = a % 10;
if (e < 0)
{
_putchar(-e + 48);
return (-e);
}
else (e > 0)
{
_putchar(e + 48);
return (e);
}
}
