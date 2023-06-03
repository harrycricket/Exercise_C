#include <stdio.h>

int main() {
	double r;
	const double PI = 3.14;
	printf("The radius of the circle: ");
	scanf("%lf", &r);
	if (r > 0) {	
		printf("\nThe perimeter of the circle: %0.2f", 2 * PI * r );
		printf("\n\nThe area of the circle: %0.2f\n", PI * r * r);
	} else {
		printf("The radius is invalid");
	}

	
	return 0;
}
