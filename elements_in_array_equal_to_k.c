#include<stdio.h>

int main() {
    int n, k;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[100];
    int count = 0;
    int i;
    
    printf("The %d elements in array are: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            count++;
        }
    }
    printf("The number of elements in array equal %d is: %d", k, count);
    return 0;
}

