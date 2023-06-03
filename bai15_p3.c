#include <stdio.h>
#include <stdbool.h>

bool palindrome(int n)
{
	int m = n;
	int temp = 0;
	while(m > 0)
	{
		temp = temp * 10 + m % 10;
		m /= 10;
	}
	return temp == n;
}

bool checkNot6(int n)
{
	int temp = 0;
	while(n > 0)
	{
		temp = n % 10;
		n /= 10;
		if(temp == 6)
		{
			return false;
		}
	}
	return true;
}

bool sumDivisibleBy6(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum % 6 == 0;
}

int main()
{
	int i;
	printf("The list of 8-digit numbers satisfying the conditions above are:\n");
	for(i = 10000001; i <= 99999999; i++)
	{
		if(checkNot6(i) && palindrome(i) && sumDivisibleBy6(i))
		{
			printf("%10d", i);
		}
	}
	return 0;
}
