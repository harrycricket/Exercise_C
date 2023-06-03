/*enter a natural number n then, 
count sum of natural numbers smaller than or equal to n and 
divisible by 7*/

#include <stdio.h>

int main () {
	
	unsigned int n, i;
	unsigned long long sum = 0;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	
	for (i = 7; i <= n; i += 7)
	{
			sum += i;
	}
	printf("Sum = %lld", sum);
	
	return 0;
}

