#include <stdio.h>

int enter(int n)
{
	while(n <= 0)
	{
		printf("Enter a positive number n: ");
		scanf("%d", &n);
	}
	return n;
}

int count(int n)
{
	int count = 0;
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int countOdd(int n)
{
	int countOdd = 0;
	while(n > 0)
	{
		int temp = 0;
		temp = n % 10;
		n /= 10;
		if(temp % 2 == 1)
		{
			countOdd++;
		}
	}
	return countOdd;
}

double average(int n)
{
	int sum = 0;
	int temp = count(n);
	double average = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	average = (double) sum / temp;
	return average;
}

int main() 
{
	int n = enter(n);
	printf("n has %d numbers.\n", count(n));
	printf("n has %d odd numbers.\n", countOdd(n));
	printf("The average of the numbers in %d is %0.3lf", n, average(n));
	return 0;
}
