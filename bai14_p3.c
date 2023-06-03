#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrimeNumber(int n)
{
	if(n < 2)
	{
		return false;
	}
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

bool checkPrimeDigit(int n)
{
	int temp;
	while(n > 0)
	{
		temp = n % 10;
		n /= 10;
		if(!checkPrimeNumber(temp))
//		if(temp != 2 && temp != 3 && temp != 5 && temp != 7)
		{
			return false;
		}
	}
	return true;
}

bool checkSum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if(checkPrimeNumber(sum)) 
	{
		return true;
	}
	return false;
}


int main()
{
	int n;
	printf("The list of 8-digit numbers satisfying the conditions above are:\n");
	for(n = 22222222; n <= 77777777; n++) //because n must a prime
	{
		if(checkPrimeDigit(n) && checkSum(n) && checkPrimeNumber(n) ) //Changing the location can improve compilation speed
		{
			printf("%10d", n);
		}
	}
	return 0;
}
