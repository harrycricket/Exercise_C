#include<stdio.h>

int main() {
	int n;
	int arr[100];
	int i, j;
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("The %d elements in array are: ", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		
		for(j = i + 1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				int temporary = arr[i];
				arr[i] = arr[j];
				arr[j] = temporary;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
		if (i < n - 1)
		{
			printf("<");
		} 
	}
	return 0;
}

