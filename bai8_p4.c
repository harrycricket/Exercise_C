/* 
	enter an array include n elements, enter two integer a and b with a < b then, 
	check is this a symmetrical array or not
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

bool checkFunction(int *arr, int n)
{
	int i;
	for(i = 0; i < n / 2; i++)
	{
		if(arr[i] != arr[n - 1 - i])
		{
			return false;
		} 
	}
	return true;
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	if(checkFunction(arr, n))
	{
		printf("This array is a symmetrical array.");
	} else
	{
		printf("This array is not a symmetrical array.");
	}
	return 0;
}
