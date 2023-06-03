/*
find a greatest common divisor and a least common multiple of two integers a and b
a * b = (a,b) * [a,b]
a & b = 0 -> GCD does not exsist and LCM equal to 0
a | b = 0 -> GCD is (b | a) and LCM equal to 0
*/

#include <stdio.h>

int main() {
	
	int a, b, i;
	printf("Enter integers a and b: ");
	scanf("%d%d", &a, &b);
	
	if(a >= 0 && b >= 0) {
	
		if (a == 0 && b == 0)
		{
			printf("\nThe GCD does not exsist.");
			printf("\n\nThe LCM is equal to 0.\n");
		}
		else if (a == 0 || b == 0)
		{
			printf("\nThe GCD is %d", (a == 0) ? b : a);
			printf("\n\nThe LCM is equal to 0.\n");
		}
		else //a > 0 && b > 0
		{
			for (i = 1; i <= a * b; i++)
			if (i % a == 0 && i % b == 0)
			{
				printf("\nThe LCM is %d.", i);
				break;
			}
			printf("\n\nThe GCD is %d.\n", a * b / i);
		}
	
	} else {
		printf("Re-enter a and b, please!");
	}

	return 0;
}
