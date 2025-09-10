#include <stdio.h>

int main(void)
{
	int n, counter = 0;
	int last_digit, original_n;
	int reversed_n;

	printf("Please enter a positive number:\n");
	scanf("%d", &n);

	original_n = n;
	reversed_n = 0;

	while (n > 0)
	{
		last_digit = n % 10;
		reversed_n = (reversed_n * 10) + last_digit;
		n /= 10;
		counter++;
	}

	if (counter % 2 != 0)
	{
		if (reversed_n == original_n)
		{
			printf("%d is a palindrome\n", original_n);
		}
		else
		{
			printf("%d is not a palindrome\n", original_n);
		}
	}
	else 
	{
		printf("This test only checks odd-length numbers.\n");
	}

	return (0);
}
