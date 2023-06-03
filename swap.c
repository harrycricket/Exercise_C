#include <stdio.h>

void swap(int *a, int *b)
{
	
	int temp = *a;
	*a = *b;
	*b = temp;
	// one line: a ^= b ^= a ^= b; (bitwise)

}

int main()
{
	int a, b;
	printf("Input a, b: ");
	scanf("%d%d", &a, &b);
	
	printf("\nafter swap: ");
	swap(&a, &b);
	printf("\na = %d", a);
	printf("\nb = %d", b);
		
	return 0;
}
