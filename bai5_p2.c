//enter a positive integer n then, count S = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n

#include <stdio.h> 

int main() {
	
	unsigned int i, n;
	unsigned long long sum = 0, p = 1;
	printf("Enter a positive integer n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		p *= i;
		sum += p;
	}
	printf("S = %lld", sum);
	return 0;
}
