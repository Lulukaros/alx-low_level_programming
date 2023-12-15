include "main.h"

/** get_bit - value of bit
 * @n the bit
 * @index : index
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int ビット;
	if (index > 63)
		return (-1);
	ビット= (n >> index) & 1;
	return (ビット);
}
