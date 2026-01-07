#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, divisor, count, sum;
	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	divisor = 1;
	count = 0;
	sum = 0;

	while (divisor <= n)
	{
		if (n % divisor == 0)
		{
			count++;
			printf("%d is a divisor of %d count %d\n", divisor, n, count);

			if (divisor != n)
			{
				sum = sum + divisor;
			}
		}
		divisor++;
	}

	printf("%d has %d counts\n", n, count);

	if (count == 2)
	{
		printf("%d is a prime number\n", n);
	}
	else if (sum == n)
	{
		printf("%d is a perfect number\n", n);
	}
	else
	{
		printf("%d is neither a prime number nor a perfect number\n", n);
	}

	return (0);
}
