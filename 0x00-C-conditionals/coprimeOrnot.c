#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int a, b, rem;
	int original_a, original_b, GCD;
	printf("Please enter two positive integers\n");
	scanf("%d %d\n", &a, &b);

	original_a = a;
	original_b = b;

	while (b != 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}
	GCD = a;

	if (GCD == 1)
	{
		printf("%d and %d are coprime\n", original_a, original_b);
	}
	else
	{
		printf("%d and %d are not coprime\n", original_a, original_b);
	}

	return (0);
}
