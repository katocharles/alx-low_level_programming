#include"main.h"

/**
 * main - Entry point to the program
 * Description: prints word _putchar using putchar prototype
 * Return: Returns 0 always
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
