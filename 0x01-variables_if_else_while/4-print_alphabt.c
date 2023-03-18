#include <stdio.h>

/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}

