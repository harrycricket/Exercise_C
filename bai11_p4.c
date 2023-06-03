// random number in array

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
bool notExist(int *arr, int n, int temp)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == temp)
		{
			return false;
		}
	}
	return true;
}

void randomNumber(int *arr, int *n)
{
	*n = 0;
	while(*n <= 0)
	{
		printf("Enter a positive number n: ");
		scanf("%d", n);
	}
	
	int i = 0;
	srand(time(0));
	while(i < *n)
	{
		int temp = rand();
		if(notExist(arr, i, temp))
		{
			arr[i++] = temp;
		}
	}
}

void show(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if(i < n - 1)
		{
			printf(", ");
		} else 
		{
			printf(".");
		}
	}
}

int main()
{
	int arr[100];
	int n;
	randomNumber(arr, &n);
	show(arr, n);
	return 0;
}
