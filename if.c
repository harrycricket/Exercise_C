#include <stdio.h>

int main() {
	int n;
	puts("Nhap n: ");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("n is an even number");
	}
	if (n % 2 == 1)
	{
		printf("n is an odd number");
	}
	return 0;
}


