#include <stdio.h>
void main() {
	float a, b, c,x1,x2,x;
	float delta;
	printf("Nhap gia tri a,b,c: ");
	scanf_s("%f %f %f", &a,& b,& c);
	delta = b * b - 4 * a * c;
	if (a == 0) {
		if (b != 0) {
			x = -c / b;
			printf("Phuong trinh la bac nhat va co nghiem la x = %f\n", x);
		}
		else printf("Phuong trinh vo nghiem.\n");
	}
	else if (delta < 0) {
		printf("Phuong trinh vo nghiem.\n");
	}
	else if (delta == 0) {
		x = x1 = x2 = -b / (2 * a);
		printf("Phuong trinh co 1 nghiem kep la x= %f\n", x);
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet la x1 = %f va x2 = %f\n", x1, x2);
	}
}