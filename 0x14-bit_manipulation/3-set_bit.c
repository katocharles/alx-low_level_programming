#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask;

	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a bitmask with a 1 at the specified index */
	bitMask = 1UL << index;

	/* Use bitwise OR to set the bit value to 1 */
	*n = *n | bitMask;

	return (1);
}

