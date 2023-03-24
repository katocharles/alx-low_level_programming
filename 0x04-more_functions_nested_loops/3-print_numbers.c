#include "main.h"

/**
 * print_numbers - function to print number 0 - 9
 * Return: returns nothing
 */
void print_numbers()
{
	int i;

	for( i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}

	_putchar('\n');
}

