//enter a natural number n then, list divisors and count how many divisors n has

#include <stdio.h>

int main() {

	unsigned int i, n, count = 0;
	printf("Enter a natural number n: ");
	scanf("%d", &n);

	printf("The divisor(s) of n are: ");
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n\nn has %d divisor(s)", count);
	return 0;
}

