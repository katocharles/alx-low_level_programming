#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits in
 * @index: index of the bit to retrieve (starting from 0)
 *
 * Return: value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitMask, bitValue;

	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a bitmask with a 1 at the specified index */
	bitMask = 1UL << index;

	/* Use bitwise AND to extract the bit value at the specified index */
	bitValue = n & bitMask;

	/* Return 1 if the bit value is non-zero, 0 otherwise */
	return ((bitValue != 0) ? 1 : 0);
}

