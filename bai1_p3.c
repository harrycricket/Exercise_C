//enter positive integers m and n then, print a rectangle with m rows and n columns

#include<stdio.h>

void rectangle(int m, int n)
{
	int i, j;
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= n; j++)
		{
			printf("%4d",j);
		}
		printf("\n\n");
	}
}

int main() {
	int m, n;
	printf("Enter positive integers m and n: ");
	scanf("%d%d", &m, &n);
	rectangle(m, n);
    return 0;
}

