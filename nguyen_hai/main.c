#include <stdio.h>
void main() {
	float luong;
	float thue;
	printf("So tien luong nhan duoc 1 thang la: ");
	scanf_s("%f", &luong);
	while (luong < 0) {
		printf("Nhap lai so tien luong: ");
		scanf_s("%f", &luong);
	}
	if (luong <= 5) {
		thue = 0.05 * luong;
		printf("So tien thue phai dong la: %f", thue);
	}
	else if (luong <= 10) {
		thue = 0.1 * luong - 0.25;
		printf("So tien thue phai tra la: %f", thue);
	}
	else if (luong <= 18) {
		thue = 0.15 * luong - 0.75;
		printf("So tien thue phai tra la: %f", thue);
	}
	else if (luong <= 32) {
		thue = 0.2 * luong - 1.65;
		printf("So tien thue phai tra la: %f", thue);
	}
	else if (luong <= 52) {
		thue = 0.25 * luong - 3.25; 
		printf("So tien thue phai tra la: %f", thue);
	}
	else {
		thue = 0.35 * luong - 9.85;
		printf("So tien thue phai tra la: %f", thue);
	}
}