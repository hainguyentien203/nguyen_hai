#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum {
	NAM,
	NU
}gioi_tinh;
char* convert_gioi_tinh [] = { "Nam","Nu" };
typedef enum {
	GIOI,
	KHA,
	TB,
	YEU
}loai_t;
typedef struct {
	char* ten;
	int tuoi;
	gioi_tinh gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t xep_loai;
}hoc_sinh_t;
void xep_loai (hoc_sinh_t* hs, int sl) {
	float tb = 0;
	for (int i = 0; i < sl; i++) {
		tb = (hs[i].diem_toan + hs[i].diem_van) / 2;
		if (tb > 8.0) {
			hs[i].xep_loai = GIOI;
		}
		else if (tb >= 6.5) {
			hs[i].xep_loai = KHA;
		}
		else if (tb >= 5.0) {
			hs[i].xep_loai = TB;
		}
		else hs[i].xep_loai = YEU;
	}
}
void in_ds(hoc_sinh_t* hs, int sl) {
	for (int i = 0; i < sl; i++) {
		printf("Ten : %s\n", hs[i].ten);
		printf("Tuoi : %d\n", hs[i].tuoi);
		printf("Gioi tinh : %s\n", convert_gioi_tinh[hs[i].gioi_tinh]);
		printf("Diem toan : %d\n", hs[i].diem_toan);
		printf("Diem vam : %d\n", hs[i].diem_van);
		printf("Xep loai : %d\n", hs[i].xep_loai);
	}
}

void main() {
	hoc_sinh_t hs[] = {
		{"Nguyen Van A",18, NAM , 8.5, 9.6},
		{"Nguyen Van B",18, NU , 7.0, 9.0},
		{"Nguyen Van C",18, NAM , 6.5, 7.6},
	};
	xep_loai(hs, 3);
	in_ds(hs, 3);
}
