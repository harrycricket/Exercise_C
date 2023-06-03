//enter an integer n then, count the sum of the numbers of this integer

#include <stdio.h>

int main() 
{
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);
	int sum = 0;
	
	if (n < 0)
	{
		n *= -1;
	}
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("Sum = %d", sum);
	return 0;
}
