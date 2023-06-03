//enter a random number then, check this number is a palindrome or not?

#include <stdio.h>

int main() {
	long n, m;
	printf("Enter n: ");
	scanf("%ld", &n);
	m = n;
	long temporary = 0;
	
	if (n < 0) 
	{
		printf("Re-enter n, please!");
	} else 
	{
		while (m > 0)
		{   
			temporary = temporary * 10 + m % 10;
			m /= 10;	
		}
		
		if (temporary == n)
		{
			printf("%ld is a palindrome.", n);
		} else {
			printf("%ld is not a palindrome.", n);
		}
		
	}
	return 0;
}
