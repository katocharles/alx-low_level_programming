/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int idx, prefixIdx, statusFlag;

	idx = 0;
	while (s[idx] != '\0')
	{
		prefixIdx = 0;
		statusFlag = 1; /*flag status*/
		while (accept[prefixIdx] != '\0')
		{
			if (s[idx] == accept[prefixIdx])
			{
				statusFlag = 0; /*success*/
				break;
			}
			prefixIdx++;
		}
		if (statusFlag == 1)
			break;
		idx++;
	}

	return (idx);
}

