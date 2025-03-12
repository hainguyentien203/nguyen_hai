#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	double f_x=0;
	printf("Nhap gia tri cua so nguyen a: ");
	scanf_s("%d", &a);
	printf("Nhap gia tri cua so nguyen b: ");
	scanf_s("%d", &b);
	double h = (double)fabs(a - b) / 1000;
	for (int i = 0; i <= 1000; i++) {
		f_x = f_x + (pow(a + i * h, 2) + pow(a + (1 + i) * h, 2)) * h / 2;
	}
	printf("Gia tri cua tich phan f(x)=x^2 voi tan so mau 1000 lan la : %3f", f_x);
}

