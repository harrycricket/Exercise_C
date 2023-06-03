//enter an array include n elements, enter an integer x then, define the element has the value close to x

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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

int findAbsMin(int *arr, int n, int x)
{
	int i;
	int min = abs(arr[0] - x);
	for(i = 1; i < n; i++)
	{
		if(abs(arr[i] - x) < min)
		{
			min = abs(arr[i] - x);
		}
	}
	return min;
}


bool notOccurrence(int *temp, int n, int tmp)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(temp[i] == tmp)
		{
			return false;
		}
	}
	return true;
}


void theResult(int *arr, int n, int x, int min)
{
	int i;
	int temp[100];
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(min == abs(arr[i] - x) && notOccurrence(temp, count, arr[i]))
		{
			printf("%5d", arr[i]);
			temp[count++] = arr[i];
		}
	}
}


int main()
{
	int arr[100];
	int n = 0;
	enterTheValues(arr, &n);
	
	int x;
	printf("\nEnter an integer x: ");
	scanf("%d", &x);
	
	int min = findAbsMin(arr, n, x);
	printf("\nThe element has the value same with x: ");
	theResult(arr, n, x, min);
	return 0;
}
