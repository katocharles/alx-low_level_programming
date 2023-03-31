/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 to compare to string 2
 * @s2: string 2 against which string 1 is compared
 *
 * Return: 0 if s1 and s2 are equal
 *        negative integer if the stopping character
 *         in @s1 was less than the stopping character in @s2
 *        positive integer if the stopping character
 *         in @s1 was greater than the stopping character in @s2
*/

int _strcmp(char *s1, char *s2)
{
	int iterator = 0, response;

	/* iterate through src and compare it with dest */
	while (s1[iterator] != '\0' && s2[iterator] != '\0')
	{
		/* if they differ by a single character don't iterate further */
		if (s1[iterator] != s2[iterator])
		{
			/* difference between the two characters */
			response = s1[iterator] - s2[iterator];
			break;
		}
		else
		{
			response = s1[iterator] - s2[iterator];
		}
		iterator++;
	}

	return (response);
}

