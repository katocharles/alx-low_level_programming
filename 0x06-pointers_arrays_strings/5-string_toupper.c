/**
 * string_toupper - a function that changes lowercase letters of a string
 *			to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: pointer to string in uppercase
*/

char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] >= 97 && s[idx] <= 122)
			s[idx] = s[idx] - 32;
		idx++;
	}
	return (s);
}

