/* 
	enter an array include n elements with n - 1 elements from user and enter an integer value x, an integer number k with 0 <= k < n
	then, insert value x to the remaining position in array above
*/

#include <stdio.h>

void enterTheValues(int *arr, int *n)
{
	*n = 0;
	while(*n <= 0)
	{
		printf("Enter a positive number n: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < (*n - 1); i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void insert(int *arr, int n, int k, int x)
{
	int i;
	for(i = n - 1; i > k; i--) 
	{
		arr[i] = arr[i - 1];
	}
	arr[k] = x;
}


void show(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\narr[%d] = ", i);
		printf("%d", arr[i]);
	}
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	int k = -1;
	int x;
	while(k < 0 || k >= n)
	{
		printf("Enter an integer k with 0 <= k < n: ");
		scanf("%d", &k);
	}
	printf("Enter an integer value x: ");
	scanf("%d", &x);
	insert(arr, n, k, x);
	show(arr, n);
	return 0;
}
