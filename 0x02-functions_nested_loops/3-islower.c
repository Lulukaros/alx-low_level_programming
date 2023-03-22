#include "main.h"
/**
*_islower - Checks for lowercase characters
*Return: always 0 (success)
*/
int _islower(int c)
{
int c;
if (c >= 'a' && c <= 'z')
{
return (1);
} else if (c >= 'A' && c <= 'Z')
{
return (0);
}
}
