#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int position, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (position = 1; position <= n; ++position)
		{
			for (space = 2; space <= position; ++space)
				_putchar(' ');
			_putchar(92);/* print slash*/
			_putchar('\n');
		}
	}
}

