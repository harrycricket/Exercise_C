//enter a natural number n then, count n! 

#include <stdio.h>

int main() 
{
	unsigned int n, i;
	unsigned long long p = 1;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	i = n;
	
	if (n == 0)
	{
		printf("%d! = 1", n);
	} else 
	{
		for (i; i >= 1; i--)
		{
			p *= i;
		}
		printf("%d! = %lld", n, p);
	}

	return 0;
}
