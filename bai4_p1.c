#include <stdio.h>

int main() {
	int a, b;
	
	printf("Given an integer a: ");
	scanf("%d", &a);
	printf("Given an integer b: ");
	scanf("%d", &b);
	
	if (a > b)
	{
		printf("a is greater than b");
	} else if (a < b)
	{
		printf("a is smaller than b");
	} else
	{
		printf("a is equal to b");
	}
	return 0;
	
}
