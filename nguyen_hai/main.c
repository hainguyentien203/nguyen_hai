#include <stdio.h>
void main() {
	float a;
	printf("Nhap vao so diem trung binh cua cac hoc sinh a: ");
	scanf_s("%f", &a);
	if (a >= 8.0) {
		printf("Hoc sinh nay xep loai gioi.\n");
	}
	else if (a >= 6.5) {
		printf("Hoc sinh nay xep loai kha.\n");
	}
	else if (a >= 5.0) {
		printf("Hoc sinh nay xep loai trung binh.\n");
	}
	else {
		printf("Hoc sinh nay xep loai yeu.\n");
	}
}