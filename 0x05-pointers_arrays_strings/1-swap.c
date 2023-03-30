/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: integer parameter 1
 * @b: integer parameter 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
