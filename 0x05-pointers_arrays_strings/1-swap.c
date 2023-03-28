
#include "main.h"
/**
*swap_int - swap two numbers
*@a:First Number
*@b:Second Number
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
