#include <stdio.h>
void main() {
	int buoc = 1;
	int matkhau = 1234;
	int matkhaunguoidung=0;
	int solannhapsai=0;
	double sotien=0;
	int giaodich;
	double taikhoangoc = 10000;

	while (buoc != 5) {	
		switch (buoc) {
		case 1:
			printf("Nhap mat khau nguoi dung: ");
			scanf_s("%d", &matkhaunguoidung);
			if (matkhaunguoidung != matkhau) {
				solannhapsai++;
				if (solannhapsai >= 3) {
					printf("Nhap sai qua 3 lan giao dich ket thuc.\n");
					buoc = 5;
				}
				else {
					printf("Vui long nhap lai mat khau!\n");
					buoc = 1;
				}
			}
				else {
				printf("So du trong tai khoan la : %.3f\n", taikhoangoc);
				buoc = 2;
			} break;

		case 2:
			printf("Nhap so tien can rut: ");
			scanf_s("%lf", &sotien);
			if (sotien > taikhoangoc) {
				printf("So du tai khoan khong du vui long nhap lai.\n");
				buoc = 2;
			}
			else {
				buoc = 3;
			} break;

		case 3:
			printf("So tien quy khach da rut la: %.2f\n", sotien);
			taikhoangoc = taikhoangoc - sotien;
			buoc = 4;
			break;

		case 4:
			printf("Quy khach co muon tiep tuc giao dich khong?\n");
			printf("Nhap 1 de tiep tuc giao dich, 2 de tat giao dich: ");
			scanf_s("%d", &giaodich);
			while (giaodich != 1 && giaodich != 2) {
				printf("Vui long chon 1 hoac 2 de hoan tat giao dich!\n");
				scanf_s("%d", &giaodich);
			}
			if (giaodich == 1) {
				buoc = 2;
			}
			else buoc = 5;
			break;
		}
	}
	printf("Giao dich ket thuc!\n");
}