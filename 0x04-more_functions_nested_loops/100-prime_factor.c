#include <stdio.h>

/**
 * _squareRoot - finds the square root
 *
 * @x: number whose square root to be calculated
 *
 * Return: square root of x
 *
 */

double _squareRoot(double x)
{
	float squareRoot, intermediateValue;

	squareRoot = x / 2;
	intermediateValue = 0;

	while (squareRoot != intermediateValue)
	{
		intermediateValue = squareRoot;
		squareRoot = (x / intermediateValue + intermediateValue) / 2;
	}
	return (squareRoot);
}

/**
 * largest_prime_factor - finds and prints the largestPrimeNumber
 *			prime factor of number (num)
 *
 * @num: number to find
 */

void largest_prime_factor(long int num)
{
	int primeNumber, largestPrimeNumber;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (primeNumber = 3; primeNumber <= _squareRoot(num); primeNumber += 2)
	{
		while (num % primeNumber == 0)
		{
			num = num / primeNumber;
			largestPrimeNumber = primeNumber;
		}
	}

	if (num > 2)
		largestPrimeNumber = num;
	printf("%d\n", largestPrimeNumber);
}

/**
 * main - Entry point
 *
 * Return: returns zero always
 */
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}

