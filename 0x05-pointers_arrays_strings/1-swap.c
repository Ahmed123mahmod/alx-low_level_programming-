#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The character is to be checked
 * @b: The character is to be checked
*/
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
