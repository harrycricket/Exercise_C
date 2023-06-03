/*
	enter a matrix [m x n] with m, n > 0, find the transpose of this matrix
	transpose A(T)[i][j] = A[j][i]
*/ 

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

void transpose(int arr[100][100], int m, int n, int temp[100][100])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			temp[i][j] = arr[j][i];
		}
	}
}

int main()
{
	int arr[100][100], temp[100][100];
	int m, n;
	printf("Enter an original matrix: \n");
	enterMatrix(arr, &m, &n);
	transpose(arr, m, n, temp);
	printf("The original matrix: \n");
	showMatrix(arr, m, n);
	printf("The transpose: \n");
	showMatrix(temp, n, m);
	
	return 0;
}
