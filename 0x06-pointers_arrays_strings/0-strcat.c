/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination parameter
 * @src: pointer to source parameter
 *
 * Return: pointer to resulting string destination
*/

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	/*find the size of dest array*/
	while (dest[d])
		d++;

	/* iterate through each src array value without the null byte*/
	for (s = 0; src[s] ; s++)
		/*append src[s] to dest[c] while overwriting the null byte in dest*/
		dest[d++] = src[s];

	return (dest);
}

