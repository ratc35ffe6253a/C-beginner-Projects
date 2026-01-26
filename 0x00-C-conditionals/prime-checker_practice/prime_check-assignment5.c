#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, divisor, sum, count, pair, proper_sum;
	printf("Enter a positive number:\n");
	scanf("%d", &n);

	if (n < 2)
	{
		printf("%d is not prime.\n", n);
		return (0);
	}

	divisor = 1;
	sum = 0;
	count = 0;

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0)
		{
			pair = n / divisor;

			if (pair != divisor)
			{
				sum = sum + divisor + pair;
				count = count + 1;
			}
			else
			{
				sum = sum + divisor;
				count = count + 1;
			}
		}
		divisor = divisor + 1;
	}

	proper_sum = sum - n;

	if (proper_sum == 1)
	{
		printf("%d is a prime number.\n", n);
	}
	else if (proper_sum == n)
	{
		printf("%d is a perfect number.\n", n);
	}
	else if (proper_sum > n)
	{
		printf("%d is an abandunt number.\n", n);
	}
	else
	{
		printf("%d is a deficient number.\n", n);
	}

	return (0);
}
