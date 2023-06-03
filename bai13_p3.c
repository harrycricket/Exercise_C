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

void listnFirstPrime(int n)
{
	int count = 0;
	int i = 2;
	printf("The list of the first %d primes are: ", n);
	while(count < n)
	{
		if(check(i))
		{
			count++;
			printf("%d", i);
			if(count < n)
			{
				printf(",  ");
			}
		}
		i++;
	}
}

void listnFirstFibonacci(int n)
{
	printf("\nThe list of the first %d Fibonacci are:\n", n);
	long long f0 = 0, f1 = 1, fn;
	int i;
	for(i = 0; i < n; i++)
	{
		if(i == 0 || i == 1)
		{
			fn = i;
		} else
		{
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
		printf("f%d = %lld\n", i, fn);
	}
}

void listnFirstSquareNumber(int n)
{
	printf("\nThe list of the first %d square number are: ", n);
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d", i * i);
		if(i < n - 1)
		{
			printf(",  ");
		}
	}
}
int main() 
{
	int n = enterPositiveNumber(n);
	listnFirstPrime(n);
	listnFirstFibonacci(n);
	listnFirstSquareNumber(n);
	return 0;
}
