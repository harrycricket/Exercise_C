#include <stdio.h>
#include <stdbool.h>

bool palindrome(int n)
{
	int m = n;
	int temp = 0;
	while (m > 0)
	{
		temp = 10 * temp + m % 10;
		m /= 10;
	}
	return temp == n;
}
 
bool divisible(int n, int k)
{
	return n % k == 0;
} 


int main()
{
	int i, n, k;
	printf("Enter a positive integer k: ");
	scanf("%d", &k);
	if(k > 0)
	{
		for ( i = 10000001; i <= 99999999; i++)
		{
			if(palindrome(i) && divisible(i, k))
			{
				printf("%11d", i);
			}
		}
	} else 
	{
		printf("Re-enter k, please!");
	}
	
	return 0;
} 
