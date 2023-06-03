//enter two natural numbers m and n then, list square numbers from m to n.

#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int m, n;
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	
	if (m >= 0 && n >= 0 && m < n)
	{
		int i;
		int start = sqrt(m);
		start = (start * start == m) ? start : start + 1;
		int end = sqrt(n);
		for (i = start; i <= end; i++)
		{
			printf("%d", i * i);
			if(i < end)
			{
				printf(", ");
			} else printf(".");
		}
	} else
	{
		printf("Re-enter m and n, please!");
	}
	return 0;
}
