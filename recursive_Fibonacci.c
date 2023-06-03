// list Fibonacci using recursive function

#include <stdio.h>

int n;
long long fibonacci(n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);

}

int main()
{
	printf("Enter n: ");
	scanf("%d", &n);
	printf("The %d Fibonacci is: %lld", n, fibonacci(n));
	return 0;
}


