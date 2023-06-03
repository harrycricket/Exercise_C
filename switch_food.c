#include <stdio.h>

int main() {
	printf("What are you in the mood for?\n");
	puts("This is my menu\n =+=+=MENU=+=+=");
	puts("1. Grill chicken.");
	puts("2. Potato soup.");
	puts("3. Mixed green salad.");
	puts("4. Spring rolls.");
	puts("5. Ice tea.");
	
	int choice;
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			printf("This is your grill chicken.\nHave a great meal!");
			break;
		case 2:
			printf("This is your potato soup.\nHave a great meal!");
			break;
		case 3: 
			printf("This is your mixed green salad.\nHave a great meal!");
			break;
		case 4:
			printf("This is your spring rolls.\nHave a great meal!");
			break;
		case 5:
			printf("This is your ice tea.\nHmmm, come to the luxury restaurant and just drink ice tea, asshole!");
			break;
		default:
			printf("I do appologize but today my restaurant just have these food.");
			break;
	}	
	
	return 0;
}
