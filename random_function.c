#include <stdio.h>
#include <stdlib.h> //random function in this library
#include <time.h> //srand(time(NULL));
int main() {
//	srand() — Set Seed for rand() Function. 
//	printf("Max value in random = %d", RAND_MAX);
	srand(time(NULL)); //print different values
	int i;
	for (i = 0; i < 25; i++)
	{
		int random = 1 + rand() % 6; 
		/*
		limit the values 
		random function starts with value = 0
		*/
		printf("%5d", random);
	}
	return 0;
}
