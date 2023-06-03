//enter positive numbers a and b with a < b then, find and print all primes in [a, b]

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int n)
{
	if(n < 2)
	{
		return false;
	} else
	{
		int i;
		for(i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int main() 
{
	int n, a, b;
	printf("Enter positive numbers a and b: ");
	scanf("%d%d", &a, &b);
	if(a > 0 && b > 0 && a < b)
	{
		for(n = a; n <= b; n++)
		{
			if(prime(n))
			{
				printf("%5d", n);
			}
		}
	} else
	{
		printf("Re-enter a and b are positive numbers with 1 < a < b, please!");
	}
	
	return 0;
}
