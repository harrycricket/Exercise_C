#include <stdio.h>

int main() {
	
	int a, b, c, d;
	int Max;
	
	printf("Given an integer a: ");
	scanf("%d", &a);
	printf("Given an integer b: ");
	scanf("%d", &b);
	printf("Given an integer c: ");
	scanf("%d", &c);
	printf("Given an integer d: ");
	scanf("%d", &d);
	
	/*	Max = (a > b) ? a : b;
	Max = (Max > c) ? Max : c;
	Max = (Max > d) ? Max : d;
	
	if (a == b && b == c && c == d){
		printf("Max value does not exist");
	} else {
		printf("Max = %d", Max);
	} */
	if (a == b && b == c && c == d)
	{
		printf("\nMax value does not exist\n");
	}
	else if (a >= b && a >= c && a >= d)
	{
		printf("Max = %d", a);
	}
	 else if (b >= c && b >= d)
	{
		printf("Max = %d", b);
	}
	 else if (c >= d)
	{
		printf("Max = %d", c);
	}
	 else
	{
		printf("Max = %d", d);
	}

	return 0;
}
