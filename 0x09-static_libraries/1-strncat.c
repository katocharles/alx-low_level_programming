/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: maximum number of bytes from @src
 *
 * Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;

	/* find size of dest array */
	while (dest[d])
		d++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[d + s] = src[s];
	/*null terminate dest*/
	dest[d + s] = '\0';

	return (dest);
}

