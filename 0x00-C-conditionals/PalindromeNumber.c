#include <stdio.h>

int main(void)
{
	int n, last_digit;
	int original_n;
	int reversed_number = 0;

	printf("Please enter a positive integer:\n");
	scanf("%d", &n);

	original_n = n;

	while (n > 0)
	{
		last_digit = n % 10;
		reversed_number = (reversed_number * 10) + last_digit;
		n /= 10;
	}

	if (original_n == reversed_number)
	{
		printf("%d is a palindrome\n", original_n);
	}
	else
	{
		printf("%d is not a palindrome\n", original_n);
	}

	return (0);
}
