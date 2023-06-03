
#include <stdio.h>

void enterTheValues(int *arr, int *n)
{
	*n = 0;
	while(*n <= 0)
	{
		printf("Enter a number of list in array ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int maxValue(int *arr, int *n) {
	int max = arr[0];
	for (int i = 0; i < *n; i++) {
		if (arr[i] > arr[0])
			arr[i] = max;
	}
}

//int countSum()  {
//    scanf("%d%d", &a, &b);
//
//    int sum = 0;
//    for (int i = a; i <= b; i++) 
//    {
//        sum = sum + i;
//    }
//        printf("sum = %d", sum);
//
//    return 0;
//}

void menu() {
	printf("1. Find a max value.\n");
	printf("2. Count sum.\n");
	printf("3. Bubble sort.\n");
	printf("4. Insertion sort.\n");
	printf("\nInput your choice: ");
	int choice;
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			maxValue(arr, n);
			break;
		case 2:
			
			break;
		case 3: 
			
			break;
		case 4:
			
			break;

		default:
			printf("Please, input your choice from 1 to 4!");
			break;
	}	
}

int main() {
	int arr[100];
	menu();
	enterTheValues(arr, &n);
	
	return 0;
}