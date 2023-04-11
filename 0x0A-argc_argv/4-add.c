#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: Returns O (Success) or 1 (Failure)
*/

int isNum(char num[])
{
	int idx, length = strlen(num);

	for (idx = 0; idx < length; idx++)
	{
		if (!isdigit(num[idx]))
			return (1);
	}
	return (0);
}


/**
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Returns O (Success) or 1 (Failure)
*/

int main(int argc, char *argv[])
{
	int idx, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (idx = 1; idx < argc; idx++)
		{
			if (isNum(argv[idx]) == 0)
			{
				sum += atoi(argv[idx]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

