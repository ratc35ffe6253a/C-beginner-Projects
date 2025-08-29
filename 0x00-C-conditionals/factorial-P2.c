#include <stdio.h>

int main(void)
{
	int num = 1, factorial = 1;
	int n;

	printf("Please enter an integer:\n");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Please enter a positive integer.\n");
		return 0;
	}

	while (num <= n)
	{
		factorial *= num;
		num++;
	}

	printf("Factorial of %d is %d\n", n, factorial);

	return (0);
}
