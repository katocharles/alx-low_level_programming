#include "main.h"

/**
 * print_most_numbers - function to print number 0 - 9
 *			except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(48 + i);
		}
	}

	_putchar('\n');
}
