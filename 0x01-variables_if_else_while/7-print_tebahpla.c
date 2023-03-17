#include <stdio.h>

/**
 * main - function that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: returns 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
