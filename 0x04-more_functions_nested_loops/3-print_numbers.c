#include "main.h"
/**
*print_numbers - prints out the numbers from 0 to 9
*Return: void
*/
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}