#include "main.h"

/**
 * get_bit - value of bit
 * @n:  the bit
 * @index : index
 * Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
