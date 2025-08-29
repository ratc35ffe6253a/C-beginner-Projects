#include <stdio.h>

int main(void)
{
	int num = 1;
	int n, result;

	printf("Please enter a Positive integer:\n");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Please enter a Positive integer\n");
		return 0;
	}

	printf("Multiplication table of %d:\n", n);

	while (num <= n)
	{
		result = n * num;
		printf("%d x %d = %d\n", n, num, result);
		num++;
	}

	return (0);
}
