#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= j; i++)
			{
				_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}