#include <stdio.h>

int main(void)
{
	int n, original_n;
	int product = 1;
	int last_digit;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	original_n = n;

	if (n == 0)
	{
		product = 0;
	}

	while (n > 0)
	{
		last_digit = n % 10;
		product *= last_digit;
		n /= 10;
	}

	printf("The product of digits in %d is %d\n", original_n, product);

	return (0);
}
