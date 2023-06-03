#include<stdio.h>

int main()  {
    int a, b;
    scanf("%d%d", &a, &b);

    int i, sum = 0;
    for (i = a; i <= b; i++) 
	//must declare the variable used for the first "for" loop before the loop in Dev_C (int i;)
    {
        sum = sum + i;
    }
        printf("sum = %d", sum);

    return 0;
}

