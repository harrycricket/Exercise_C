#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (10 <= a && a <= 100) {
		printf("%d is in range (10, 100)", a);
	} else {
		printf("%d is not in range (10, 100)", a);
	}
	return 0;
}
