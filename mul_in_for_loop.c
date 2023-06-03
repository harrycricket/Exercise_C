#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int mul = 1;
    for (i = 1; i <= n; i++)
    {
        mul *= i;
      
    }  
    printf("n! = %d", mul);
    return 0;
}
