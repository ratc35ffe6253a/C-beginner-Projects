#include <stdio.h>

int main(void)
{
	int n, original_n;
	int counter = 0;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	original_n = n;

	if (n == 0)
	{
		counter = 1;
	}
	else
	{
		while (n > 0)
		{
			n /= 10;
			counter++;
		}
	}

	printf("%d has %d digits\n", original_n, counter);

	return (0);
}
