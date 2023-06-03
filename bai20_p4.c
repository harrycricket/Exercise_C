// enter a matrix [m x n] with m, n > 0, find the max value on each row

#include<stdio.h>

void enterMatrix(int arr[100][100], int *m, int *n)
{
	*m = *n = 0;
	while(*m <= 0 || *n <= 0)
	{
		printf("Enter positive numbers m and n: ");
		scanf("%d%d", m, n);
	}
	int i, j;
	for(i = 0; i < *m; i++)
	{
		for(j = 0; j < *n; j++)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void showMatrix(int arr[100][100], int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}

void findMaxValue(int arr[100][100], int m, int n)
{
	int i, j, max;
	for(i = 0; i < m; i++)
	{
		max = arr[i][0];
		for(j = 1; j < n; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
		printf("\nThe max value on row %d = %d", i, max);
	}
}

int main()
{
	int arr[100][100];
	int m, n;
	enterMatrix(arr, &m, &n);
	showMatrix(arr, m, n);
	findMaxValue(arr, m, n);
	return 0;
}
