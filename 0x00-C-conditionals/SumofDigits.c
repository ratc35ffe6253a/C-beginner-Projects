#include <stdio.h>

int main(void)
{
	int n, original_n;
	int sum = 0;
	int last_digit;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	original_n = n;

	while (n > 0)
	{
		last_digit = n % 10;
		sum += last_digit;
		n /= 10;
	}

	printf("The sum of digits in %d is %d\n", original_n, sum);

	return (0);
}
