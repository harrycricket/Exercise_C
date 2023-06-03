#include <stdio.h>

int main() {
	int n;
	printf("given an integer n: ");
	scanf("%d", &n);
	
	if (n % 2 == 0)
	{
		printf("%d is an even number\n", n);
	}
	else 
	{
		printf("%d is an ood number\n", n);
	}
	if (n > 0) 
	{
		printf("%d is a positive number\n", n);
	}
	else if (n < 0) 
	 {
		printf("%d is a negative number\n", n);
	} else
	{
		printf("%d is equal to 0", n);
	}
	return 0;
}
