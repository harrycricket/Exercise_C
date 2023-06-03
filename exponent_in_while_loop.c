#include <stdio.h>

int main() {
	
	int a, b;
	scanf("%d%d", &a, &b);
	int exponent = 1;
	
	while(b > 0) 
	{
		exponent *= a;
		b--;
	}
	printf("exponent of a^b = %d", exponent);
	return 0;
}
