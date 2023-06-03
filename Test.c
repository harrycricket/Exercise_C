
#include<stdio.h>

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

void show(int* arr, int startIndex, int length) {
	int i;
	printf("\nStart position: %d, length: %d", startIndex, length);
	printf("\nThe elements: ");
	for(i = startIndex; i < startIndex + length; i++) 
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
}

void showArray(int *arr, int n)
{
	int i;
	printf("\nThe original array: ");
	for(i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
}

void findPosition(int *arr, int n, int *start, int *end, int *count)
{
	int j = 0;
	start[j] = 0;
	int i;
	for(i = 0; i < n - 1; i++) 
	{
		if(arr[i] > arr[i + 1] )
		{
			end[j++] = i;
			start[j] = i + 1;
		}
	}
	end[j++] = n - 1;
	*count = j;
}

int findLongestAscending(int *start, int *end, int n)
{
	int max = end[0] - start[0] + 1;
	int i;
	for(i = 1; i < n; i++) {
		int length = end[i] - start[i] + 1;
		if(length > max) {
			max = length;
		}
	}
	return max;
}

void theResult(int *arr, int n, int *start, int *end, int count)
{
	int i;
	if(count == n)
	{
		printf("\nDoes not exist the longest ascending elements.");
	} else
	{
		int max = findLongestAscending(start, end, count);
		for(i = 0; i < count; i++)
		{
			int length = end[i] - start[i] + 1;
			if(length == max)
			{
				show(arr, start[i], length);
			}
		}
	}
}

int main()
{
	int arr[100];
	int n;
	int start[100];
	int end[100];
	int count = 0;
	enterTheValues(arr, &n);
	showArray(arr, n);
	findPosition(arr, n, start, end, &count);
	theResult(arr, n, start, end, count);
	return 0;
}
