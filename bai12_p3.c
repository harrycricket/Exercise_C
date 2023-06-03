#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int enterPositiveNumber(int n)
{
	while(n <= 0)
	{
		printf("Enter a positive number n: ");
		scanf("%d", &n);
	}
	return n;
}

void divisor(int n)
{
	int i;
	printf("\nThe divisors of %d are: ", n);
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d", i);
			if(i < n)
			{
				printf(",  ");
			}
		}
	}
}

int countDivisor(int n)
{
	int count = 0;
	int i;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	return count;
}

bool check(int n)
{
	int i;
	if(n < 2)
	{
		return false;
	}
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void listPrimeDivisor(int n)
{
	printf("\nThe prime divisor(s) of %d are: ", n);
	int i;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			if(check(i))
			{
				printf("%3d", i);
			}
		}
	}
}

int main() 
{
	int n = enterPositiveNumber(n);
	divisor(n);
	printf("\n\n%d has %d divisor(s).\n", n, countDivisor(n));
	listPrimeDivisor(n);
	return 0;
}
