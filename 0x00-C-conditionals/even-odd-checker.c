#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 3;
	
	if (n % 2 == 0)
	{
		printf("%d is even\n", n);
	}
	else
	{
		printf("%d is odd\n", n);
	}

	return (0);
}
