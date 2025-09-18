#include <stdio.h>

int main(void)
{
	int a, b, temp;
	int original_a, original_b;

	printf("Please enter two positive numbers separated by a space or enter:\n");
	scanf("%d %d", &a, &b);

	original_a = a;
	original_b = b;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	printf("The GCD of %d and %d is %d\n", original_a, original_b, a);

	return (0);
}
