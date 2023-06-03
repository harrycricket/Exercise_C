#include<stdio.h>

int main() {
	int a, b;
	char c;
	printf("Enter a, c and b: ");
	scanf("%d %c %d", &a, &c, &b);
	
	double t = (double) a / b;
	switch (c) {
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		if (b == 0)
		{
			printf("Does not exsist %d / %d.", a, b);
			break;
		} else 
		{
			printf("%0.5lf", t);
			break;
		}
		
	default:
		printf("c is one of 4 characters +, -, *, /.");
		break;
	}
	return 0;
}

