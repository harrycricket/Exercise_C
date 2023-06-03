#include <stdio.h>
 
int main() {
	int a, b;
	puts("Nhap so nguyen thu nhat: "); //hien thi thong diep ra man hinh va con tro chuot tu xuong dong
	scanf("%d", &a); //&a luu tru tai bien a 
	printf("Nhap so nguyen thu hai: \n"); // chi hien thi ra man hinh
	scanf("%d", &b);
	/*
	int sum = a + b;
	printf("a + b = %d", sum);
	*/
	printf("a + b = %d", a + b);
	return 0;
}
