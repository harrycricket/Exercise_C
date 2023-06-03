#include<stdio.h>

int main() {
    int n, i;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];
	
	printf("The elements in array are: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max in array is: %d", max);
    return 0;
}

