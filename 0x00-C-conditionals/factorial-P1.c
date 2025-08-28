#include <stdio.h>

int main(void)
{
	int factorial = 1;
	int n, num;

	printf("Please enter an integer:\n");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Please enter a positive integer.\n");
		return 0;
	}

	for (num = 1; num <= n; num++)
	{
		factorial *= num;
	}

	printf("Factorial of %d is %d\n", n, factorial);

	return (0);
}
