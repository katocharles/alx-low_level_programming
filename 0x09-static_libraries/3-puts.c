#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: pointer to string parameter
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

