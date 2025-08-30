#include <stdio.h>

int main(void)
{
	int num = 1;
	int sum = 0;
	int n;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Please enter a positive integer\n");
		return 0;
	}

	while (num <= n)
	{
		sum += num;
		num++;
	}
	printf("Sum of natural numbers upto %d = %d\n", n, sum);

	return (0);
}
