/*
Calculate and print Pascal's triangle with formula:
nCk = (n-1)C(k-1) + (n-1)Ck
nC0 = nCn = 1
*/

#include <stdio.h>
int pascal(int k, int n)
{
	if(k == 0 || k == n)
	{
		return 1;
	}
	return pascal(k - 1, n - 1) + pascal(k, n - 1);
}

int main()
{
	int n, i, k;
	printf("Enter n: ");
	scanf("%d", &n);
	if(n <= 0)
	{
		printf("Re-enter n > 0, please!");
	} else
	{
		printf("The Pascal's triangle: \n");
		for(i = 0; i <= n; i++)
		{
			for(k = 0; k <= n - i; k++)
			{
				printf("   ");
			}
			for(k = 0; k <= i; k++)
			{
				printf("%6d", pascal(k, i));
			}
			printf("\n");
		}
	}
	
	return 0;
}
