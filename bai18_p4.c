#include<stdio.h>

void enterTheValues(int *arr, int *n)
{
	*n = -1;
	while(*n < 0)
	{
		printf("Enter a natural number n >= 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i <= *n; i++)
	{
		printf("a%d = ", i);
		scanf("%d", &arr[i]);
	}
}

double derivative(int *arr, int n)
{
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);
	double xExponentY = 1; // y = i - 1;
	double result = arr[1];
	int i;
	for(i = 2; i <= n; i++)
	{
		xExponentY *= x;
		result += i * arr[i] * xExponentY;
	}
	return result;
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	double result = derivative(arr, n);
	printf("The first-order derivative of P(x) = %0.3lf", result);
	return 0;
}
