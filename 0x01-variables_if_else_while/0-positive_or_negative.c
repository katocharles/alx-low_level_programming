#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function assigns a random number to int n
 * everytime this program runs and prints n
 * Return: Always returns  a 0 (means success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
