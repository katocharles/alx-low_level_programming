#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @spaceAllocation
*/

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *spaceAllocation;

	if (size == 0)
		return (NULL);

	spaceAllocation = malloc(size * sizeof(char));

	if (spaceAllocation == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		spaceAllocation[idx] = c;

	return (spaceAllocation);
}

