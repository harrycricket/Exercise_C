//enter a natural number n then, print the even and odd numbers smaller than n

#include <stdio.h>

int main() {
	
	int n, i;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	
	if (n > 0) {
		printf("\nThe even numbers are: ");
		for (i = 0; i < n; i += 2)
		{
			printf("%d ", i);
		}
		
		printf("\n\nThe odd numbers are: ");
		for (i = 1; i < n; i += 2)
		{
			printf("%d ", i);
		}
	} else 
	{
		printf("re-enter n! ");
	}
	
	
//	if (n > 0) {
//	 	printf("The even numbers are: ");
//		for (i = 0; i < n; i++) 
//		{
//			if (i % 2 == 0) {
//				printf("%d ", i);
//			} 
//		}
//	
//	
//		printf("\n\nThe odd numbers are: ");
//		for (i = 0; i < n; i++) 
//		{
//			if (i % 2 == 1) {
//				printf("%d ", i);
//			} 
//		}
//} else 
//	{
//		printf("re-enter n! ");
//	}
	return 0;
}
