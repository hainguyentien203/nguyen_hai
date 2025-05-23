#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include<iostream>
class giai_ptb2 {
	// a*pow(x,2) + b*x + c = 0;
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float x;
public:
	void nhapheso() {
		printf("Nhap he so a, b, c: ");
		scanf_s("%f %f %f", &a,&b,&c);
	}
	float delta() {
		return b * b - (4 * a * c);
	}
	void giai_pt() {
		if (a == 0)
		{
			if (b != 0) {
				x = -c / b;
				printf("Phuong trinh la bac nhat va co nghiem la x = %f\n", x);
			}
			else printf("Phuong trinh vo nghiem.\n");
		}
		else if (delta() < 0) {
			printf("Phuong trinh vo nghiem.\n");
		}
		else if (delta() == 0) {
			x = -b / (2 * a);
			printf("Nghiem cua phuong trinh la : x = %f", x);
		}
		else {
			x1 = (-b - sqrt(delta())) / (2 * a);
			x2 = (-b + sqrt(delta())) / (2 * a);
			printf("Phuong trinh co 2 nghiem la x1 = %.2f\t x2 = %.2f\n", x1, x2);
		}
	}
};
int main() {
	giai_ptb2 A;
	A.nhapheso();
	A.giai_pt();
	return 0;
}

