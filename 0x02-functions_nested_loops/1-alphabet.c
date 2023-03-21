#include"main.h"

/**
 * print_alphabet - function to print the alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ++ch)
		_putchar(ch);
	_putchar('\n');
}
