/* 
	enter a positive number n and an array with n elements then, sorting ascending and descending the elements in array
	show the results before and after sorting
*/	

#include <stdio.h>

void enterTheValues(int *arr, int *n);
void show(int *arr, int n);
void increaseFunction(int *arr, int n);
void decreaseFunction(int *arr, int n);

int main()
{
	int n = 0;
	int arr[100];
	enterTheValues(arr, &n);
	printf("\n\nThe array before sorting: ");
	show(arr, n);
	
	increaseFunction(arr, n);
	printf("\n\nThe array after sorting ascending: ");
	show(arr, n);
	
	decreaseFunction(arr, n);
	printf("\n\nThe array after sorting descending: ");
	show(arr, n);
	
	return 0;
}

void enterTheValues(int *arr, int *n)
{
	while(*n <= 0)
	{
		printf("Enter a positive number n: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++)
	{
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void increaseFunction(int *arr, int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void decreaseFunction(int *arr, int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void show(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}
