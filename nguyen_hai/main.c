#include <stdio.h>
void main() {
	int kwh;
	float sotien;
	printf("Nhap vao so KWh gia dinh su dung: ");
	scanf_s("%d", &kwh);
	while (kwh < 0) {
		printf("Nhap lai so KWh gia dinh su dung: ");
		scanf_s("%d", &kwh);
	}
	if (kwh <= 50) {
		sotien = 1.678 * kwh;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
	else if (kwh <= 100) {
		sotien = 1.678 * 50+(kwh-50)*1.734;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
	else if (kwh <= 200) {
		sotien = 1.678 * 50 + 50 * 1.734 + (kwh-100)*2.014;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
	else if (kwh <= 300) {
		sotien = 1.678 * 50 + 50 * 1.734 + 100 * 2.014 + (kwh-200)*2.536;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
	else if (kwh <= 400) {
		sotien = 1.678 * 50 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kwh - 300) * 2.834;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
	else {
		sotien = 1.678 * 50 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kwh - 400) * 2.927;
		printf("So tien ma gia dinh phai tra la: %f", sotien);
	}
}