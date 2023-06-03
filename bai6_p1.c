#include <stdio.h>

int main() {
	double length, width;
	
		printf("Length of rectangle: ");
		scanf("%lf", &length);
		printf("Width of rectangle: ");
		scanf("%lf", &width);
		
	if (length > 0 && width > 0 && length >= width) 
	{		
		printf("\nThe perimeter of the rectangle: %0.2lf", (length + width) * 2 );
		printf("\n\nThe area of the rectangle: %0.3lf\n", length * width);
	} else {
		printf("The rectangle is invalid");
	}
	return 0;
}
