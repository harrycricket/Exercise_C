#include <stdio.h>
#include <stdbool.h>

bool even(int n)
{
	return n % 2 == 0;
}

bool noIncrease(int n)
{
	int a, b;
	int i = 10000;
	a = n / i;
	n %= i;
	i /= 10; 
	while (n > 0)
	{
		b = n / i;
		n %= i;
		i /= 10;
		if(a < b)
		{
			return false;
		}
		a = b;
	}
	return true;
}

void listOfEvenNoIncrease(int n)
{
	printf("The list of the even no increase from left to right are:\n\n");
	int i;
	for(i = 10000; i <= 99999; i++)
	{
		if(even(i) && noIncrease(i))
		{
			printf("%10d", i);
		}
	}
}

bool noDecrease(int n)
{
	int a, b;
	a = n % 10;
	n /= 10;
	while(n > 0)
	{
		b = n % 10;
		n /= 10;
		if(a < b)
		{
			return false;
		}
		a = b;
	}
	return true;
}

void listOfOddNoDecrease(int n)
{
	printf("\n\n\nThe list of the odd no decrease from left to right are:\n\n");
	int i;
	for(i = 11111; i <= 99999; i++)
	{
		if(!even(i) && noDecrease(i))
		{
			printf("%10d", i);
		}
	}
}

bool sumOddEqualToSumEven(int n)
{
	int sumOdd = 0, sumEven = 0;
	int temp;
	while(n > 0)
	{
		temp = n % 10;
		n /= 10;
		if(even(temp))
		{
			sumEven += temp;
		} else
		{
			sumOdd += temp;
		}
	}
	return sumOdd == sumEven;
}

void listOfNumberSumOddEqualToSumEven(int n)
{
	int i;
	printf("\n\n\nThe list of the numbers has sum of even digits equal to sum of odd digits are: \n\n");
	for(i = 10000; i <= 99999; i++)
	{
		
		if(sumOddEqualToSumEven(i))
		{
			printf("%10d", i);
		}
	}
}


int main()
{
	int n;
	listOfEvenNoIncrease(n);
	listOfOddNoDecrease(n);
	listOfNumberSumOddEqualToSumEven(n);
	return 0;
}
