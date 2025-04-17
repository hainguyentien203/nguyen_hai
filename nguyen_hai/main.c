#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<Windows.h>
typedef enum {
	NAM,
	NU
}gioitinh;
typedef struct {
	char ten[100];
	gioitinh gt;
	int tuoi;
	float toan;
	float van;
	float diem_tb;
}Danhsach;
void Readfile(Danhsach* hs,int *sl) {
	FILE* f = fopen("D:\\HocEmbedded\\DanhSachHocSinh1.csv", "r");
	if (f == NULL) {
		printf("Mo file that bai.\n");
		return;
	}
	else printf("Mo file thanh cong.\n");
	char str[200];
	*sl = 0;
	while (fgets(str, sizeof(str), f)) {
		char gender[10] = { 0 };
		gender[0] = '\0';
		int n = sscanf(str, "%[^\t]\t%d\t%[^\t]\t%f\t%f",
			hs[*sl].ten,
			&hs[*sl].tuoi,
			gender,
			&hs[*sl].toan,
			&hs[*sl].van);
		if (n == 5) {
			hs[*sl].gt = (strcmp(gender, "NAM") == 0) ? NAM : NU;
			hs[*sl].diem_tb = (hs[*sl].toan + hs[*sl].van) / 2.0;
			(*sl)++;
		}
		else {
			printf("Dong loi : %s", str);
		}
	}
	fclose(f);
}
void inDanhsach(Danhsach* hs, int sl) {
	for (int i = 0; i < sl; i++) {
		printf("Ten: %s\t", hs[i].ten);
		printf("Tuoi: %d\t", hs[i].tuoi);
		printf("Gioi tinh: %s\t", hs[i].gt == NAM ? "Nam" : "Nu");
		printf("Diem Toan: %.f\t", hs[i].toan);
		printf("Diem Van: %.f\t", hs[i].van);
		printf("Diem Trung Binh: %.2f\n", hs[i].diem_tb);
	}
}
void TB_max(Danhsach* hs,int sl) {
	float max = hs[0].diem_tb;
	int vitri = 0;
	for (int i = 1; i < sl; i++) {
		if (hs[i].diem_tb > max) {
			max = hs[i].diem_tb;
			vitri = i;
		}
	}
	printf("\n");
	printf("Hoc sinh co diem trung binh cao nhat la:\n");
	printf ("Ten: %s\t", hs[vitri].ten);
	printf("Tuoi: %d\t", hs[vitri].tuoi);
	printf("Gioi tinh: %s\t", hs[vitri].gt == NAM ? "Nam" : "Nu");
	printf("Diem Toan: %.f\t", hs[vitri].toan);
	printf("Diem Van: %.f\t", hs[vitri].van);
	printf("Diem Trung Binh: %.2f\n", hs[vitri].diem_tb);
}
void sap_xep(Danhsach* hs, int sl) {
	for (int i = 0; i < sl - 1; i++) {
		for (int j = i + 1; j < sl; j++) {
			if (hs[j].diem_tb > hs[i].diem_tb) {
				Danhsach tg = hs[i];
				hs[i] = hs[j];
				hs[j] = tg;
			}
		}
	}
	printf("\n");
	printf("Danh sach hoc sinh sau khi sap xep theo diem trung binh tu cao xuong thap la:\n");
	inDanhsach(hs, sl);
}
void luu_file(Danhsach* hs, int sl) {
	FILE* f = fopen("D:\\HocEmbedded\\DanhSachHocSinh2.csv", "w");
	if (f == NULL) {
		printf("Mo file ghi that bai.\n");
		return;
	}
	for (int i = 0; i < sl; i++) {
		fprintf(f, "%s\t%d\t%s\t%.2f\t%.2f\n", hs[i].ten, hs[i].tuoi, hs[i].gt == NAM ? "NAM" : "NU", hs[i].toan, hs[i].van);
	}
	fclose(f);
	printf("\n");
	printf("Danh sach da duoc luu vao file 'DanhSachHocSinh2.csv'.\n");
}
void main() {
	Danhsach* hs = (Danhsach*)malloc(sizeof(Danhsach) * 1000);
	int sl=0;
	Readfile(hs, &sl);
	inDanhsach(hs, sl);
	TB_max(hs, sl);
	sap_xep(hs, sl);
	luu_file(hs, sl);
	free(hs);
	return;
}

