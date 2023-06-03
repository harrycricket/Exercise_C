#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	
	printf("Given a real number a: ");
	scanf("%lf", &a);
	printf("Given b real number b: ");
	scanf("%lf", &b);
	printf("Given c real number c: ");
	scanf("%lf", &c);
	
	if (a == 0) {
		if (b == 0 && c == 0) {
			printf("The equation has infinitely many solutions");
		} else if (b == 0 && c!= 0) {
			printf("The equation has no solution");
		} else {
		printf("The solution of the equation is x = %0.2f", -c / b);
		} 
	}

	else //a != 0
	{
		double delta;
		delta = b * b - a * c * 4;
		printf("\ndelta = %f\n\n", delta);
		
		if (delta < 0) {
			printf("The equation has no solution");
		} else if (delta == 0) {
			printf("The equation has a double solution x = %0.2f", -b / (2 * a));
		} else { //delta > 0
			printf("The equation has two solutions are x1= %0.2f, x2 = %0.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
		}
	}
	
	return 0;
}
