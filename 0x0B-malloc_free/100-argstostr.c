#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int idxA, idxB, idxC, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/
	length = 0;
	for (idxA = 0; idxA < ac; idxA++)
	{
		for (idxB = 0; av[idxA][idxB] != '\0'; idxB++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	idxC = 0;
	for (idxA = 0; idxA < ac; idxA++)
	{
		for (idxB = 0; av[idxA][idxB] != '\0'; idxB++)
		{
			str[idxC] = av[idxA][idxB];
			idxC++;
		}
		str[idxC] = '\n';
		idxC++;
	}
	str[idxC] = '\0';

	return (str);
}

