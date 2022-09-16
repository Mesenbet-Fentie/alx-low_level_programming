#include "main.h"
#include <stdio.h>

/**
 * main - Prints the maximum prime factor of number
 *
 * Return: nothing
 */
int main(void)
{
	long num;
	int maxPrime, oddPrime;

	num = 612852475143;
	maxPrime = 0;
	oddPrime = 3;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num = num / oddPrime;
		}
		oddPrime += 2;
	}
	printf("%d\n", maxPrime);
}
