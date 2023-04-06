#include "main.h"
/**
 *_puts_recursion - Prints a character
 *@s: pointer to the string
 *Return: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		{
	_putchar('\n');
	return;
		}
	putchar(*s);
	_puts_recursion(s + 1);
}
