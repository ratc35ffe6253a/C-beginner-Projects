#include <stdio.h>

int main(void)
{
	int reversed_number = 0;
	int n, last_digit;
	int original_n;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	original_n = n;

	if (n == 0)
	{
		printf("Reversed digits of %d is %d\n", original_n, reversed_number);
		return 0;
	}

	while (n > 0)
	{
		last_digit = n % 10;
		reversed_number = (reversed_number * 10) + last_digit;
		n /= 10;
	}
	printf("Reversed digits of %d is %d\n", original_n, reversed_number);

	return (0);
}
