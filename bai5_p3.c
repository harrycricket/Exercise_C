//enter positive integer h then, print symmetrical number triangle with h being the height

#include <stdio.h>
#include <math.h>

int main()
{
	int h;
	printf("Enter positive integer h: ");
	scanf("%d", &h);
	int i, j;
	
	if(h > 0)
	{
		for(i = 1; i <= h; i++)
		{
			for(j = 1; j <= 2 * h - 1; j++)
			{
				if(abs(h - j) <= i - 1)
				{
					printf("%3d", i - abs(h - j) );
				} else
				{
					printf("   ");
				}
			}
			printf("\n\n");
		}
	} else 
	{
		printf("Re-enter h, please!");
	}
	
	
	return 0;
}
