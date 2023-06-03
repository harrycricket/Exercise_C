#include <stdio.h>

int main() {
	double a, b;
	
	printf("Given a real number a: ");
	scanf("%lf", &a);
	printf("Given a real number b: ");
	scanf("%lf", &b);
	
	if (a == 0 && b == 0)
	{
		printf("The equation has infinitely many solutions");
	} else if (a == 0 && b != 0)
	{
		printf("The equation has no solution");
	} else 
	{
		printf("The solution of the equation is x = %0.2lf", -b / a);
	}
	
	return 0;
}
