#include <stdio.h>

/**
 * main - Entry point
 *
 * Return (0): Always Success
 */

int main(void)
{
	int n, divisor, pair, proper_sum;
	printf("Please enter a positive integer: \n");
	scanf("%d", &n);
	
	if (n < 2)
	{
		printf("%d is neither prime nor perfect\n", n);
		return (0);
	}

	divisor = 1;
	proper_sum = 0;

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0)
		{
			pair = n / divisor;

			if (divisor != n)
			{
				proper_sum = proper_sum + divisor;
			}

			if (pair != divisor && pair != n)
			{
				proper_sum = proper_sum + pair;
			}

			if (proper_sum > n)
			{
				printf("%d is Abundant\n", n);
				return (0);
			}
		}
		divisor = divisor + 1;
	}

	if (proper_sum == 1)
	{
		printf("%d is Prime\n", n);
	}
	
	if (proper_sum == n)
	{
		printf("%d is Perfect\n", n);
	}
	
	if (proper_sum < n)
	{
		printf("%d is Deficient\n", n);
	}

	return (0);
}
