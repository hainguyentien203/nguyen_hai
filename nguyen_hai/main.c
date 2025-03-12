#include <stdio.h>

void main() {
	int so_tien = 0;
	int sl50 = 0;
	int sl100 = 0;
	int sl200 = 0;
	int sl500 = 0;
	int tong = 0;
	printf("Nhap vao so tien muon rut: ");
	scanf_s("%d", &so_tien);
	while (so_tien % 50 != 0) {
		printf("Vui long nhap lai so tien muon rut la boi so cua 50!\n");
		printf("Nhap lai so tien muon rut: ");
		scanf_s("%d", &so_tien);
	}
	while (tong < so_tien) {
		if (so_tien - tong >= 50) {
			tong = sl50 * 50 + sl100 * 100 + sl200 * 200 + sl500 * 500;
			sl50++;
			tong = tong + 50;
		}
		if (so_tien - tong >= 100) {
			sl100++;
			tong = tong + 100;
		}
		if (so_tien - tong >= 200) {
			sl200++;
			tong = tong + 200;
		}
		if (so_tien - tong >= 500) {
			sl500++;
			tong = tong + 500;
		}
	}
	printf("%d to 50\n", sl50);
	printf("%d to 100\n", sl100);
	printf("%d to 200\n", sl200);
	printf("%d to 500\n", sl500);

}

