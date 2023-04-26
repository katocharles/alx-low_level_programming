#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int idx = 0, stringIndx = 0;
	char *spacePointer;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[stringIndx] != '\0')
		stringIndx++;

	spacePointer = malloc((stringIndx + 1) * sizeof(char));
	if (spacePointer == NULL)
		return (NULL);

	while (str[idx] != '\0')
	{
		spacePointer[idx] = str[idx];
		idx++;
	}

	return (spacePointer);
}

