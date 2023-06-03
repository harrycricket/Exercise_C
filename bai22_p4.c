// enter two matrices A[m x n] and B[m x n], then calculate sum of them


#include<stdio.h>

void enterColumnAndRow(int *m, int *n)
{
	*m = *n = 0;
	while(*m <= 0 || *n <= 0)
	{
		printf("Enter positive numbers m and n: ");
		scanf("%d%d", m, n);
	}
}

void enterMatrix(int arr[100][100], int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void sumOfMatrix(int array1[100][100], int array2[100][100], int arraySum[100][100], int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			arraySum[i][j] = array1[i][j] + array2[i][j];
		}
	}
}

void showSumOfMatrix(int arraySum[100][100], int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%-5d", arraySum[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int array1[100][100], array2[100][100], arraySum[100][100];
	int m, n;
	enterColumnAndRow(&m, &n);
	
	printf("\nEnter an array A: \n");
	enterMatrix(array1, m, n);
	printf("The matrix A: \n\n");
	showSumOfMatrix(array1, m, n);
	
	printf("\nEnter an array B: \n");
	enterMatrix(array2, m, n);
	printf("The matrix B: \n\n");
	showSumOfMatrix(array2, m, n);
	
	sumOfMatrix(array1, array2, arraySum, m, n);
	printf("\nThe matrix C: \n\n");
	showSumOfMatrix(arraySum, m, n);
	return 0;
}
