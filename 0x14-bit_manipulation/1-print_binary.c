#include <stdio.h>
#include "main.h"
/**
 * print_binary - nn hh
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
unsigned int decimal_num, c, result;
	for (c = 31; c >= 0; c--)
	{
		result = decimal_num >> c;

		if (result & 1)
			_putchar('1');
		else
			_putchar('0');
	}

	_putchar('\n');

	return 0;
}
