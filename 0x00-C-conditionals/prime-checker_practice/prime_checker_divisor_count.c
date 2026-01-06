#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, divisor, count;
	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	divisor = 1;
	count = 0;

	while (divisor <= n)
	{
		if (n % divisor == 0)
		{
			count++;
		}
		divisor++;
	}

	printf("%d has %d divisors\n", n, count);

	if (count == 2)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is not a prime number\n", n);
	}

	return (0);
}
