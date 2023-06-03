/* 
	enter a positive number n and an array with n elements
	enter an integer x and then, count the number of x occurrences in array 
*/
#include <stdio.h>

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

int theNumbeOfOccurrences(int *arr, int n, int x)
{
	int count = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			count++;
		}
	}
	return count;
}


int main()
{
	int arr[100];
	int n = 0;
	enterTheValues(arr, &n);
	int x;
	printf("\nEnter an integer x: ");
	scanf("%d", &x);
	printf("\nThe number of occurrences of %d is: %d (times)", x, theNumbeOfOccurrences(arr, n, x));
	return 0;
}

