#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, prime, n;
	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	num = 2;
	prime = 1;

	if (n < 2)
	{
		printf("%d is not prime\n", n);
	}

	while (num < n)
	{
		if (n % num == 0)
		{
			prime = 0;
			break;
		}
		num++;
	}

	if (prime == 1)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is not a prime number\n", n);
	}

	return (0);
}
