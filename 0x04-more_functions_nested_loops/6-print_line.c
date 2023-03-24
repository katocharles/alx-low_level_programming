#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_line(int n)
{
	int lineLength;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lineLength = 1; lineLength <= n; ++lineLength)
			_putchar('_');
		_putchar('\n');
	}
}
