#include <stdio.h>

int main(void)
{
	int n, original_n;
	int zero_count = 0;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	original_n = n;

	if (n == 0)
	{
		zero_count = 1;
	}
	else
	{
		while (n > 0)
		{
			int last_digit = n % 10;

			if (last_digit == 0)
			{
				zero_count++;
			}
			n /= 10;
		}
	}

	printf("%d has %d zeros\n", original_n, zero_count);

	return (0);
}
