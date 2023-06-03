//enter a natural number n then, count S = 1 + 1/2 + ... +  1/n

#include <stdio.h> 

int main() {
	
	int i = 1, n;
	double sum = 0;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	
	if (n >= 1) {
	
		for (i; i <= n; i++)
		{
			sum += (double) 1 / i;
		}
		printf("sum = %0.5lf", sum);
		
	//	do {
	//		sum += (double)1 / i;
	//		i++;
	//	} while (i <= n);
	//	printf("sum = %0.3lf", sum);
	} else {
		printf("re-enter n!");
	}
	return 0;
}
