//enter an integer n then, check n is a prime or not?

#include <stdio.h>
#include <math.h>

int main() {
	
	int n, i, count = 0;
	printf("Enter an integer n: ");
	scanf("%d", &n);

	if (n < 2)
	{
		printf("\n%d is not a prime.\n", n);
	} else 
	{
		for (i = 2; i <= sqrt(n); i++)
//		for (i = 2; i < n; i++)  	
		{
			if (n % i == 0)
			{
				count++ ;
			}

		}
		if (count == 0) 
		{
			printf("\n%d is a prime.\n", n);
		} else 
		{
			printf("\n%d is not a prime.\n", n);
		}
	}

	return 0;
}
