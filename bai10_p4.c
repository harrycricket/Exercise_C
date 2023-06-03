/* 
	enter an array include n elements then, 
	print all the elements in array only once
*/

#include <stdio.h>
#include <stdbool.h>

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

bool checkExist(int *arr, int index, int temp)
{
	int i;
	for(i = 0; i < index; i++)
	{
		if(arr[i] == temp)
		{
			return true;
		}
	}
	return false;
}

void show(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(!checkExist(arr, i, arr[i]))
		{
			printf("%5d", arr[i]);
		}
	}
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	show(arr, n);
	return 0;
}
