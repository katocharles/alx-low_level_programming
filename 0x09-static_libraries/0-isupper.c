/**
 * _isupper - checks if given charactor is uppercase
 * @c: alphabet charactor
 * Return: returns 1 if c uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
