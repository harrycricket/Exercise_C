//enter two natural numbers m and n then, check they're co-prime or not?

#include <stdio.h>

int main() 
{
	unsigned int m, n;
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	
	if (m >= 0 && n >= 0)
	{
		if (m == 1 || n == 1)
		{
			printf("m and n are co-prime.");
		} else if (m == 0 || n == 0)
		{
			printf("m and n are not co-prime.");
		} else //m and n >= 2
		{
			while (m != n)
			{
				if (m > n)
				{
					m -= n;
				} else {
					n -= m;
				}
			}
		
			if (m == 1)
			{
				printf("m and n are co-prime.");
			} else 
			{
				printf("m and n are not co-prime.");
			}
		}
	} else 
	{
		printf("Re-enter m and n, please!");
	} 
	return 0;
}
