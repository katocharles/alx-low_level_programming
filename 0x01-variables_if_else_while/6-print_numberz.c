#include <stdio.h>

/**
 * main - function that prints all single digit numbers of base 10 from 0,
 * followed by a new line, using putchar
 * Return: returns 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
