#include <stdio.h>

int enter(int n)
{
	while(n <= 0)
	{
		printf("Enter n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

int sum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}	
	return sum;
}

void separate(int n)
{
	int i = 2;
	printf("%d = ", n);
	while(i <= n)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
			if(n != i)
			{
				printf("* ");
			}
			n /= i;
		} else
		i++;
	}
}

int main()
{
	int n = enter(n);
	printf("\nThe sum of numbers in %d: %d\n\n", n, sum(n));
	separate(n);
	return 0;
}
