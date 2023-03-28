#include "main.h"
/*
*_strlen - Get the lenght of a char
*@*s:pointer parametre
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}

