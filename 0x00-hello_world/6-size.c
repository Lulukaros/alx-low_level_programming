#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
 */
int main(void)
{
	printf("The size of char is %lu bytes\n", sizeof(char));
	printf("The size of int is %lu bytes\n", sizeof(int));
	printf("The size of long int is %lu bytes\n", sizeof(long int));
	printf("The size of long long int is %lu bytes\n", sizeof(long long int));
	printf("The size of float is %lu bytes\n", sizeof(float));
	return (0);
}
