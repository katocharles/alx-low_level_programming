#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 *					of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int idx, Sum1, Sum2;

	Sum1 = 0;
	Sum2 = 0;

	for (idx = 0; idx < (size * size); idx++)
	{
		if (idx % (size + 1) == 0)
			Sum1 += a[idx];
		if (idx % (size - 1) == 0 && idx != 0 && idx < size * size - 1)
			Sum2 += a[idx];
	}
	printf("%d, %d\n", Sum1, Sum2);
}

