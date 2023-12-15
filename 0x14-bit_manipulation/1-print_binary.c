#include "main.h"
/**
 * print_binary - nn hh
 * Return: Always 0.
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int result;
int c, count;
	for (c = 63; c >= 0; c--)
	{
		result = n >> c;

		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
