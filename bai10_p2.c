//separate an integer into prime factors

#include <stdio.h>

int main () {
	
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);
	int i = 2;
	
	if (n < 2)
	{
		printf("Re-enter n, please!");
	} else 
	{

		printf("%d = ", n);
		while (n > 1)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n != i){
					printf("x");
				}
				n /= i;
			} else 
			i++;
		}
	}
	return 0;
}
