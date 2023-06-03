#include <stdio.h>

void enterTheValues(int *a, int *n) {
	*n = -1;
	while(*n < 0) {
		printf("Enter degree of polynomial: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i <= *n; i++) {
		printf("x^%d = ", i);
		scanf("%d", &a[i]);
	}
}

void create(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void sum(int *a, int m, int *b, int n, int *s, int *k) {
	int i;
	*k = (m > n) ? m : n;
	for(i = 0; i <= *k; i++) {
		s[i] = a[i] + b[i];
	}
}

void show(int *a, int n) {
	int i;
	for(i = n; i >= 0; i--) {
		printf("%dx^%d", a[i], i);
		if(i > 0 && a[i-1] > 0) {
			printf(" + ");
		} else if(a[i - 1] < 0) {
			printf(" ");
		}
	}
}

int main() {
	int p[100], q[100], s[100];
	int m, n, k;
	create(p, 100);
	create(q, 100);
	
	printf("The polynomial information P(x): \n");
	enterTheValues(p, &m);
	
	printf("\nThe polynomial information Q(x): \n");
	enterTheValues(q, &n);
	
	sum(p, m, q, n, s, &k);
	
	printf("S(x) = ");
	show(s, k);
	
	return 0;
}
