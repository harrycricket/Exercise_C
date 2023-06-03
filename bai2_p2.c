//enter a natural number n then, count S = 1 + 2 + ... + n

#include <stdio.h>

int main() {
	
	int i, n, sum = 0;
	printf("Enter a natural number n: ");
	scanf("%d", &n);
	
	if (n >= 1) {
	//	while (i <= n) {
	//		sum += i; 
	//		i++;
	//	}
		sum = n * (n + 1) / 2;

	printf("sum = %d", sum);	
	} else {
		printf("re-enter n!");
	}
	return 0;
}
