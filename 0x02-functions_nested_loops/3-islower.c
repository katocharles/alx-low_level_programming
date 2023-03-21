#include"main.h"

/**
 * _islower - function to check if
 *           character is lowercase
 *
 * Return: returns 1 if `c` is lowercase else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
