/* 
	enter an array include n elements with n - 1 elements from user and sorting ascending these elements 
	then, input an integer x and insert x into an array without losing the sortability of the array
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

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void bubbleSort(int *arr, int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

int findPosition(int *arr, int n, int x)
{
	if(x < arr[0])
	{
		return 0;
	} else if(x > arr[n - 1])
	{
		return n;
	} else 
	{
		int i;
		for(i = 0; i < n; i++)
		{
			if(arr[i] >= x)
			{
				return i;
			}
		}
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
	bubbleSort(arr, n - 1);
	int x;
	printf("Enter an integer x: ");
	scanf("%d", &x);
	int temp = findPosition(arr, n - 1, x);
	insert(arr, n, temp, x);
	show(arr, n);
	return 0;
}
