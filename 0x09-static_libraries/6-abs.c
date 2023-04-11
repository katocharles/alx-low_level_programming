#include"main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @n: integer whose absolute value is to be found
 *
 * Return: returns postive integer
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
