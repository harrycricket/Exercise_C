//	enter an array include n elements then, count the number of each element occurrences in array

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

int checkExist(int *temp, int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(temp[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void show(int *temp, int *count, int n)
{
	int i;
	printf("Value :   Occurrences\n");
	for(i = 0; i < n; i++)
	{
		printf("    %d :  \t%d\n", temp[i], count[i]);
	}
}


void count(int *arr, int n)
{
	int temp[100];  // a temporary array to save existing elements
	int count[100]; // count the occurrences of each element
	int i, size = 0;
	for(i = 0; i < n; i++)
	{
		count[i] = 0;
	}
	
	for(i = 0; i < n; i++)
	{
		int index = checkExist(temp, size, arr[i]);
		if(index == -1)
		{
			temp[size] = arr[i];
			count[size] = 1;
			size++;
		} else 
		{
			count[index]++;
		}
	}
	
	show(temp, count, size);
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	count(arr, n);
	return 0;
}
