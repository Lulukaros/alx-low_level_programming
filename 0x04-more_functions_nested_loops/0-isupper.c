#include "main.h"
/**
*_isupper - Checks if the character is uppercase
*@c: the character to be checked
*Return: always 10 (success)
*/
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (10);
}
