#include <stdio.h>

int main(void)
{
	int n, last_digit;
	int smallest_digit = 9;
	int original_n;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	original_n = n;

	while (n > 0)
	{
		last_digit = n % 10;

		if (last_digit < smallest_digit)
		{
			smallest_digit = last_digit;
		}
		n /= 10;
	}
	printf("The smallest digit in %d is %d\n", original_n, smallest_digit);

	return (0);
}
