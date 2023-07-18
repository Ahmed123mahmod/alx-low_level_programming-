#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @r: The number to be checked
 * Return: Absolute value of number or zero
*/
int _abs(int r)
{
	if (r < 0)
	{
		int abs_val;

		abs_val = r * -1;

		return (abs_val);
	}
	return (r);
}
