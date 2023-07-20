#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The character is to be checked
 * Return: If n is 0 or less, the function should only print a \n
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
