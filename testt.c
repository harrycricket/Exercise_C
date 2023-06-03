#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;

	int i;
	for (i = 2; i <= n/2; i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main()
{
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int n,sum,i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  
  // Write your statements here
  //......
  sum = 0;
  for (i = 2; i <= n; i++)
  	if (isPrime(i))
  		sum += i;
  
  
  
  
  //End your statements
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}
