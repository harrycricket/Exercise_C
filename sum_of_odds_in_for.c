#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, sum = 0;

    for (i = 0; i <= n; i += 1)
    {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    printf("sum = %d", sum);
    
    return 0;
}
