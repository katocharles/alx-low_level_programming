/**
 * _strchr - a function that locates first occerance of
 *		a character in a string
 *
 * @s: pointer to a string (array of char)
 * @c: character to locate from string
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return the pointer to the '\0'
	 * of the string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}

