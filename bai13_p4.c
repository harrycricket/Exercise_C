/* 
	enter an array include n elements and enter an integer number k with 0 <= k < n
	then, delete the element at position k in array above
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
	for(i = 0; i < *n; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void deleteElement(int *arr, int n, int k)
{
	int i;
	for(i = k; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
}

void show(int *arr, int n)
{
	int i;
	for(i = 0; i < n - 1; i++)
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
	while(k < 0 || k >= n)
	{
		printf("Enter an integer k with 0 <= k < n: ");
		scanf("%d", &k);
	}
	deleteElement(arr, n, k);
	show(arr, n);
	return 0;
}
