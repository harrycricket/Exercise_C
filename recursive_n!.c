//n! using recursive function

#include <stdio.h>

long long factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
	
}

int main()
{
	int n;
	printf("enter n: ");
	scanf("%d", &n);
	printf("%d! = %lld", n, factorial(n));
	return 0;
}
