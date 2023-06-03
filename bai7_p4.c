/* 
	enter an array include n elements, enter two integer a and b with a < b then, 
	calculator sum of the elements have the values in [a, b]
*/

#include <stdio.h>

void enterTheValues(int *arr, int *n, int *a, int *b)
{
	*n = 0;
	while(*n <= 0)
	{
		printf("Enter n: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	while(*a >= *b)
	{
		printf("Enter a and b with a < b: ");
		scanf("%d%d", a, b);
	}
}

int countSum(int *arr, int n, int a, int b)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a <= arr[i] && arr[i] <= b)
		{
			sum += arr[i];
		}
	}
	return sum;
}

int main()
{
	int arr[100];
	int n, a, b;
	enterTheValues(arr, &n, &a, &b);
	
	int sum = countSum(arr, n, a, b);
	printf("The sum of elements in the [%d, %d] is: %d", a, b, sum);
	return 0;
}
