#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)\n", sizeof(char));
	printf("The size of an int: %lu byte(s)\n", sizeof(int));
	printf("The size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
