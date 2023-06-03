/*enter a nutural number n then, count
a. S = sum of natural numbers smaller than or equal to n
b. S1 = sum of odd natural number smaller than or equal to n
c. S2 = sum of even natural number smaller than or equal to n
*/

#include <stdio.h> 

int main() {
	
	int i, n, sum = 0, sum1 = 0, sum2 = 0;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		sum += i;
		if (i % 2 == 1)
		{
			sum1 += i;
		} else {
			sum2 += i;
		}
	}
	printf("Sum off natural numbers S = %d\n", sum);
	printf("Sum of odd natural number S1 = %d\n", sum1);
	printf("Sum of even natural number S2 = %d\n", sum2);
	
//	//part a
//	sum = n * (n + 1) / 2;
//	printf("S = %d", sum);
	
	
//  //part b
//	while (i <= n) {
//		if (i % 2 == 1)
//		{
//			sum1 += i;
//		}
//		i++;
//	}
//	printf("S1 = %d", sum1);
	
	
//	//part c
//	do {
//		if (i % 2 == 0)
//		{
//			sum2 += i;
//		}
//		i++;
//	} while (i <= n);
//	printf("S2 = %d", sum2);
//	
	return 0;
}
