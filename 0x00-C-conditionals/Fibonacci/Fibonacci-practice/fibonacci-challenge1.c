#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, first, second, count, next;
	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Invalid input\n");
		exit (0);
	}

	printf("Fibonacci sequence:\n");

	if (n >= 1)
	{
		printf("%d ", 0);
	}

	if (n >= 2)
	{
		printf("%d ", 1);
	}

	first = 0;
	second = 1;
	count = 2;

	while (count < n)
	{
		next = first + second;
		printf("%d ", next);

		first = second;
		second = next;
		count++;
	}

	return (0);
}
