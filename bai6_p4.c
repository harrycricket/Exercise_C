/* 
	enter an array include n elements, enter an integer x then, 
	calculator average of odd numbers and average of even numbers, print the result
*/

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

void calculate(int *arr, int n, double *averageOfOdd, double *averageOfEven)
{
	int i;
	int evenNumber = 0;
	int sumOfEven = 0;
	int sumOfOdd = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			sumOfEven += arr[i];
			evenNumber++;
		} else 
		{
			sumOfOdd += arr[i];
		}
	}
	*averageOfOdd = (evenNumber == n) ? 0 : (double)sumOfOdd / (n - evenNumber);
	*averageOfEven = (evenNumber == 0) ? 0 : (double)sumOfEven / evenNumber;
}

void show(int *arr, double averageOfOdd, double averageOfEven)
{
	
	printf("The average of odd numbers in array is: %0.3lf\n", averageOfOdd);
	printf("The average of even numbers in array is: %0.3lf", averageOfEven);
}

int main()
{
	int arr[100];
	int n;
	enterTheValues(arr, &n);
	double averageOfOdd, averageOfEven;
	calculate(arr, n, &averageOfOdd, &averageOfEven);
	show(arr, averageOfOdd, averageOfEven);
	return 0;
}
