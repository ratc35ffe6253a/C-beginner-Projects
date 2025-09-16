#include <stdio.h>

int main(void)
{
	int n, original_n;
	int odd_count = 0;
	int even_count = 0;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	original_n = n;

	if (n == 0)
	{
		even_count = 1;
	}
	else
	{
		while (n > 0)
		{
			int last_digit = n % 10;
			
			if (last_digit % 2 == 0)
			{
				even_count++;
			}
			else
			{
				odd_count++;
			}
			n /= 10;
		}
	}

	printf("%d has %d even digits and %d odd digits\n", original_n, even_count, odd_count);

	return (0);
}
