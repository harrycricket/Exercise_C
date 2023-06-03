#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%i", &n);
	if (n % 2 == 1) 
	{
		printf("n is an odd number");
	} else
	{
		printf("n is an even number");
	}
	return 0;
}
