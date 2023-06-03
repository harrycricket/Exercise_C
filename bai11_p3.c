#include <stdio.h>
#include <stdbool.h>

int enter(int n)
{
	while(n <= 0)
	{
		printf("Enter a positive integer n: ");
		scanf("%d", &n);
	}
	return n;
}

bool arrange(int n)
{
	int a, b;
	a = n % 10;
	n /= 10;
	while (n > 0)
	{
		b = n % 10;
		n /= 10;
		if(a <= b)
		{
			return false;
		} else 
		{
			a = b;
		}
	}
	return true;
}

int firstDigit(int n)
{
	int temp = 0;
	while(n > 0)
	{
		temp = n % 10;
		n /= 10;
	}
	return temp;
}

int count(int n)
{
	int temp = firstDigit(n);
	int time = 0;
	while(n > 0)
	{
		int mark = 0;
		mark = n % 10;
		n /= 10;
		if (temp == mark)
		{
			time++;
		}
	}
	return time;
}
int main() 
{
	int n = enter(n);
	if(arrange(n))
	{
		printf("%d arranged in ascending order.\n", n);
	} else
	{
		printf("%d not arranged in ascending order.\n", n);
	}
	printf("The first digit in %d is: %d\n", n, firstDigit(n));
	printf("%d appears %d time(s) in %d.\n", firstDigit(n), count(n), n);
	return 0;
}

