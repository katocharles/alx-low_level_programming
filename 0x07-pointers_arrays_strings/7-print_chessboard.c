#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	int idx, row;

	idx = 0;
	row = 0;
	while (idx < 64)
	{
		if (idx % 8 == 0 && idx != 0)
		{
			row = idx;
			_putchar('\n');
		}

		_putchar(a[idx / 8][idx - row]);
		idx++;
	}
	_putchar('\n');
}

