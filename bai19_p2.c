//enter a > 0 and a real number x then, count e^x

#include <stdio.h>
#include <math.h>

int main ()
{
	double a, x;
	printf("Enter a, x: ");
	scanf("%lf%lf", &a, &x);

	int k = 0;
	long long factorial = 1; //k!
	double index = 1; //x^k
	double temporary = index / factorial;
	double result = 0;
	
	if (a > 0)
	{
		while (fabs(temporary) > a)
		{
			result += temporary;
			k++;
			factorial *= k;
			index *= x;
			temporary = index / factorial;
			
		}
		
		printf("e^%0.3lf = %0.5lf", x, result);
	} else {
		printf("Re-enter a, please!");
	}
	return 0;
}
