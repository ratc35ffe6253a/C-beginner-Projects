#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1, sum = 0;
	int n;
	printf("Please enter any number:\n");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("Please enter a positive integer.\n");
		return 1;
	}

	while (num <= n)
	{
		if (num % 2 != 0)
		{
			sum += num;
		}
		num++;
	}

	printf("Sum of even numbers from 1 to %d is %d\n", n, sum);

	return (0);
}
