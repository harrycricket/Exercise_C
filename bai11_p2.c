//list the first n primes 

#include <stdio.h>
#include <math.h>

int main() {
	
	unsigned int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	if (n < 1)
	{
		printf("Re-enter n, please!");
	} else
	{
		int m = 2;
		int i;
		int count = 0;
		
		printf("The list of the first %d primes are: ", n);
		while (3) { //infinite loop
			int mark = 1;
			for (i = 2; i <= sqrt(m); i++){
				if (m % i == 0)
				{
					mark = 0;
					break;
				} 
				
			}
			if (mark == 1)
			{
				count++;
				printf("%d, ", m);
			}
			if (count == n)
			{
				break;
			}
			m++;
		}
		
	}
	
	return 0;
}
