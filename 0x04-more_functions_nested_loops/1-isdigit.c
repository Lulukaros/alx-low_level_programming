#include "main.h"
/**
* _isdigit - Checks if c is a digit
*Return: 1 if digit, 0 if otherwise
*@c: the character to be checked
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
