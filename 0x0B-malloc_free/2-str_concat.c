#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int indxA = 0, indxB = 0;
	int idx1, idx2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of str1 & str2 */
	while (s1[indxA] != '\0')
		indxA++;
	while (s2[indxB] != '\0')
		indxB++;

	/* +1 for our end of string character*/
	s = malloc((indxA * sizeof(char)) + ((indxB + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	/*add the first string to array s*/
	for (idx1 = 0; s1[idx1] != '\0'; idx1++)
		s[idx1] = s1[idx1];
	/*add the second string to array s*/
	for (idx2 = 0; s2[idx2] != '\0'; idx2++)
	{
		s[idx1] = s2[idx2];
		idx1++;
	}

	/*null terminate our new string*/
	s[idx1] = '\0';

	return (s);
}

