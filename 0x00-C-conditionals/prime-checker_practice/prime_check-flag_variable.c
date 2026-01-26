#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, divisor, is_prime;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	divisor = 2;
	is_prime = 1;

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0)
		{
			is_prime = 0;
			break;
		}
		divisor++;
	}

	if (is_prime == 1)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is not a prime number\n", n);
	}

	return (0);
}
