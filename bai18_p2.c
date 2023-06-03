//enter a real number a > 0 then, count PI 

#include <stdio.h>
int main()
{
	double a;
	printf("Enter a real number a: ");
	scanf("%lf", &a);
	
	if (a > 0)
	{
		int k = 0;
		double sum = 0;
		int index = -1;
		double temporary = 1.0/ (2 * k + 1);
		
		while (temporary > a)
		{
			temporary = 1.0/ (2 * k + 1);
			sum += (-1) * index * temporary;
			index *= -1;
			k++;
		}
		printf("PI = %0.8lf", sum * 4);
	} else 
	{
		printf("Re-enter a, please!");
	}
	return 0;
}
