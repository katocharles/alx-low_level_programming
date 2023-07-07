#include "main.h"

/**
 * _length - find the length of @n
 *
 * @n: value to find its length
 *
 * Return: length
 */
int _length(unsigned long int n)
{
	int length = 0;

	for (; n > 0; n >>= 1)
	{
		length++;
	}

	length--;

	return length;
}

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	length = _length(n);
	mask = 1 << length;

	for (; mask > 0; mask >>= 1)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

