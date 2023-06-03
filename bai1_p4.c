// enter a positive number n and an array with n elements then, find the max and min values in this array 

#include <stdio.h>

void enterTheValues(int *arr, int *n)
{
	while(*n <= 0)
	{
		printf("Enter a positive number n > 0: ");
		scanf("%d", n);
	}
	int i;
	printf("\nEnter array:");
	for(i = 0; i < *n; i++)
	{
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void findMinMax(int *arr, int n, int *min, int *max)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(*min > arr[i])
		{
			*min = arr[i];
		}
		if(*max < arr[i])
		{
			*max = arr[i];
		}
	}
}

void theResult(int min, int max)
{
	if(min == max)
	{
		printf("\nThe array does not exist min and max.");
	} else {
		printf("\nThe Min value is: %d\n", min);
		printf("The Max value is: %d", max);
	}
}

int main()
{
	int arr[100];
	int n = 0;
	enterTheValues(arr, &n);
	int min = arr[0], max = arr[0];
	findMinMax(arr, n, &min, &max);
	theResult(min, max);
	return 0;
}
