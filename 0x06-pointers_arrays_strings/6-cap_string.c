/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @s: pointer to char string
 *
 * Return: pointer to capitalized string
*/

char *cap_string(char *s)
{
	int charIndex = 0;

	/* iterate through characters in the string(array of characters) */
	while (s[charIndex] != '\0')
	{
		/* check for any lowercase letters */
		if (s[charIndex] >= 97 && s[charIndex] <= 122)
		{
			/**
			 * if we have a null character change its value to capital
			*/
			if (charIndex == 0)
			{
				s[charIndex] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			*/
			if (s[charIndex - 1] == 32 || s[charIndex - 1] == 9 ||
				s[charIndex - 1] == 10 || s[charIndex - 1] == 44 ||
				s[charIndex - 1] == 59 || s[charIndex - 1] == 46 ||
				s[charIndex - 1] == 33 || s[charIndex - 1] == 63 ||
				s[charIndex - 1] == 34 || s[charIndex - 1] == 40 ||
				s[charIndex - 1] == 41 || s[charIndex - 1] == 123 ||
				s[charIndex - 1] == 124)
			{
				s[charIndex] -= 32;
			}
		}
		charIndex++;
	}
	return (s);
}

