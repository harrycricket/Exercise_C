// enter a positive integer n and an array with n elements then, find the second max and the second min values in this array 

#include <stdio.h>

void enterTheValues(int *arr, int *n)
{
	while((*n) <= 0)
	{
		printf("Enter a positive number n > 0: ");
		scanf("%d", n);
	}
	int i;
	printf("\nEnter array: ");
	for(i = 0; i < *n; i++)
	{
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void minMaxFunction(int *arr, int n, int *min, int *max)
{
	int i;
	*max = *min = arr[0];
	for(i = 0; i < n; i++)
	{
		if((*min) > arr[i])
		{
			*min = arr[i];
		}
		if((*max) < arr[i])
		{
			*max = arr[i];
		}
	}
}

void theSecondLargestAndSmallestValues(int *arr, int n, int *secondMin, int *secondMax)
{
	int i;
	int min, max;
	minMaxFunction(arr, n, &min, &max);
	
	(*secondMin) = max;
	(*secondMax) = min;
	for(i = 1; i < n; i++)
	{
		if((*secondMin) > arr[i] && arr[i] != min)
		{
			*secondMin = arr[i];
		}
		if((*secondMax) < arr[i] && arr[i] != max)
		{
			*secondMax = arr[i];
		}
	}
}

void theResult(int secondMin, int secondMax)
{
	printf("\nThe 2nd min value is: %d", secondMin);
	printf("\nThe 2nd max value is: %d", secondMax);
}


int main()
{
	int arr[100];
	int n = 0;
	enterTheValues(arr, &n);
	int secondMin, secondMax;
	theSecondLargestAndSmallestValues(arr, n, &secondMin, &secondMax);
	theResult(secondMin, secondMax);
	return 0;
}
