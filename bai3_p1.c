#include <stdio.h>

int main() {
	
	int a, b;
	printf("Given an integer a: ");
	scanf("%d", &a);
	printf("Given an integer b: ");
	scanf("%d", &b);
	
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	
	double p = (double)a / b; //declare p to get exactly result from a / b
	/* double p = (double)a / b; (explicit) or double p = 1.0*a / b; (not explicit)
		float p = (float)a / b; (explicit) or float p = 1.0f*a / b; (not explicit) */
		
	if (b != 0) //condition b is not equal to 0
	{
		printf("a / b = %0.3f\n", p);
		//if we want to rounding the result, we can use %0.nf (%0.1f, %0.2f,...) 
	} else //b is equal to 0
	{
		printf("Invalid");
	}
	return 0;
}
