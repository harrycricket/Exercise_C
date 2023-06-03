#include <stdio.h>

int main() {
	int month;
	printf("Enter a month: ");
	scanf("%d", &month);
	
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8: 
		case 10:
		case 12:
			printf("The month %d has 31 days.", month);
			break;
		case 6:
		case 4:
		case 9:
		case 11:
			printf("The month %d has 30 days.", month);
			break;
		case 2:
		{
			int year;
			printf("Enter a year: ");
			scanf("%d", &year);
			if (year % 4 == 0)
			{
				printf("The month 2 has 29 days.");
			} else {
				printf("The month 2 has 28 days.");
			}
		}
		break;
		default:
			printf("Re-enter a month, please!");
	}
	
	return 0;
}
