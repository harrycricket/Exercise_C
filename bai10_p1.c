#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double a, b, c ;
	
	printf("Enter a: ");
	scanf("%lf", &a);
	printf("Enter b: ");	
	scanf("%lf", &b);
	printf("Enter c: ");
	scanf("%lf", &c);

	if (a > 0 && b > 0 && c > 0) {
		if (a > abs(b - c) && a < b + c) {
			printf("a, b, c are the three sides of a triangle\n");
		
		} else {
			printf("a, b, c are not the three sides of a triangle");
		}
		} 
	else {
		printf("The lengthes of the sides are invalid");
		}
	
	return 0;
}
