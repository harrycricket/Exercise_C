//enter positive integer h then, print a right triangle with height h by character '*' 

#include <stdio.h>

void rightTriangle(int h)
{
	int i, j;
	for(i = 1; i <= h; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("  *");
		}
		printf("\n\n");
	}
	
	
}

int main()
{
	int h;
	printf("Enter positive integer h: ");
	scanf("%d", &h);
	rightTriangle(h);
	return 0;
}
