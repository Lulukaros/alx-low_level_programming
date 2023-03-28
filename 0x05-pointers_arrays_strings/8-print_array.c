#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(a[j]);
		if (j != (n - 1))
		{
			_putchar(", ");
		}
	}
	_putchar('\n');
}

