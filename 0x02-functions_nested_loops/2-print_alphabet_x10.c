#include "main.h"
/**
*print_alphabet_x10 - alphabet written 10 times
*Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
int i, e;
for (i = 0; i <= 9; i++)
{
	for(e = 97; e <= 122; e++)
	{
		_putchar(e);
	}
}
_putchar('\n');
}
