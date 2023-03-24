#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
*/

void print_square(int size)
{
	int width, height;

	for (width = 1; width <= size; ++width)
	{
		for (height = 1; height <= size; ++height)
			_putchar('#');
		_putchar('\n');
	}
}
