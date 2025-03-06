#include <stdio.h>
void main() {
	float a = 0;
	float b = 0;
	printf(" Nhap gia tri cua a: ");
	scanf_s("%f", &a);
	printf(" Nhap gia tri cua b: ");
	scanf_s("%f", &b);
	float max = a;
	if (b >= max) {
		printf("Gia tri lon nhat la b= %f",b);
	}
	else printf("Gia tri lon nhat la a = %f",a);
}