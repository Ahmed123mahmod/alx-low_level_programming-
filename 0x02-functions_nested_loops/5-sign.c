#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The character to be checked
 * Return: 1 if n greater than zero -1 if n less than zero else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
