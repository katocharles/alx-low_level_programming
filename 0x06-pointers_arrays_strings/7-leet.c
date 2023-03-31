/**
 * leet - a function that encodes a string into 1337
 *
 * @s: pointer to a string
 *
 * Return: pointer to a string
*/

char *leet(char *s)
{
	int idx, stringIdx = 0;
	int lowercaseLetters[] = {97, 101, 111, 116, 108};
	int uppercaseLetters[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[stringIdx] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array lowercaseLetters or
		 * upper letter in array uppercaseLetters and if it
		 * is replace it with the value in array n
		*/
		for (idx = 0; idx < 5; idx++)
		{
			if (s[stringIdx] == lowercaseLetters[idx] ||
				s[stringIdx] == uppercaseLetters[idx])
			{
				s[stringIdx] = n[idx];
				break;
			}
		}
		stringIdx++;
	}
	return (s);
}

