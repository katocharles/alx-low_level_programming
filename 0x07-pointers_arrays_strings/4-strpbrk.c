/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: pointer to a string
 * @accept: pointer to string we are searching for in @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int idx, searchIdx;

	idx = 0;
	while (s[idx] != '\0')
	{
		searchIdx = 0;
		while (accept[searchIdx] != '\0')
		{
			if (s[idx] == accept[searchIdx])
				return (s + idx);
			searchIdx++;
		}
		idx++;
	}
	return ('\0');
}

