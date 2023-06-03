#include<stdio.h>

int main() {
	int n, m;
	printf("Enter n and m: ");
	scanf("%d%d", &n, &m);
	int arr[100][100];
	int i, j;
	int sum = 0;
	
	printf("Enter n(rows) and m (columns): ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
    return 0;
}

