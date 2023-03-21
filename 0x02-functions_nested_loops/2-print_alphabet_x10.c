#include"main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int timesPrinted, ch;

	for (timesPrinted =1; timesPrinted <= 10; ++timesPrinted)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
