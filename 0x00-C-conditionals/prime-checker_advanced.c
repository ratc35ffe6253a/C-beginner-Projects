#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, divisor, prime;
	printf("Please enter a positive number:\n");
	scanf("%d", &num);

	if (num < 2)
	{
		printf("%d is not a prime\n", num);
	}

	prime = 1;
	divisor = 2;

	while (divisor < num)
	{
		if (num % divisor == 0)
		{
			prime = 0;
			break;
		}
		divisor++;
	}

	if (prime == 1)
	{
		printf("%d is a prime number\n", num);
	}
	else
	{
		printf("%d is not prime\n", num);
	}

	return (0);
}
