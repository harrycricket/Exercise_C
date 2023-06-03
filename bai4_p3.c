//enter positive integer h then, print a isosceles triangle with height h by character '*' 

#include <stdio.h>
#include <math.h>

void isoscelesTriangle(int h)
{
	int i, j;
	for(i = 1; i <= h; i++)
	{
		for(j = 1; j <= 2 * h - 1; j++)
		{
			if(abs(h - j) <= i - 1)
			{
				printf(" * ");
			} else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int h;
	printf("Enter positive integer h: ");
	scanf("%d", &h);
	isoscelesTriangle(h);
	return 0;
}
