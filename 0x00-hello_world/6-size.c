#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
 */
int main(void)
{
	printf("The size of a char:%lu\n", sizeof(char));
	printf("The size of an int: %lu\n", sizeof(int));
	printf("The size of a long int: %lu\n", sizeof(long int));
	printf("The size of a long long int: %lu\n", sizeof(long long int));
	printf("The size of a float: %lu\n", sizeof(float));
	return (0);
}
