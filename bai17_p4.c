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

double calculation(int *arr, int n)
{
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);
	double sum = arr[0]; // because a0 * x^0 = a0 (arr[0])
	int i;
	int xExponentI = 1;
	for(i = 1; i <= n; i++)
	{
		xExponentI *= x;
		sum += arr[i] * xExponentI;
	}
	return sum;
}
int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	double sum = calculation(arr, n);
	printf("The result: %0.3lf", sum);
	return 0;
}
