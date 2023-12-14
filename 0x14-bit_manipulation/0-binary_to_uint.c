#include "main.h"

/**
 * binary_to_uint - oui oui si si
 * @b: array containing the binary
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decival = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decival = decival * 2 + (b[i] - '0');
	}

	return (decival);
}
