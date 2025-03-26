#include <stdio.h>
#include <string.h>

typedef struct {
    char* ten;
    int tuoi;
    float diem_toan;
    float diem_van;
    float diem_tb;
    int xep_loai;
} hs_t;
void tinh_toan(hs_t* mang, int n) {
    for (int i = 0; i < n; i++) {
        mang[i].diem_tb = (mang[i].diem_toan + mang[i].diem_van) / 2;
        if (mang[i].diem_tb >= 8.0) mang[i].xep_loai = 0;
        else if (mang[i].diem_tb >= 6.5) { mang[i].xep_loai = 1; }
        else if (mang[i].diem_tb >= 5.0) { mang[i].xep_loai = 2; }
        else mang[i].xep_loai = 3;
    }
    for (int i = 0; i < n; i++) {
        switch (mang[i].xep_loai) {
        case 0: printf("%s: Diem tb: %.2f - Gioi\n", mang[i].ten,mang[i].diem_tb); break;
        case 1: printf("%s: Diem tb: %.2f - Kha\n", mang[i].ten, mang[i].diem_tb); break;
        case 2: printf("%s: Diem tb: %.2f - Trung Binh\n", mang[i].ten, mang[i].diem_tb); break;
        case 3: printf("%s: Diem tb: %.2f - Yeu\n", mang[i].ten, mang[i].diem_tb); break;
        }
    }
}
hs_t tim_hs_diem_tb_max(hs_t * mang, int n) {
      hs_t tb_max = mang[0]; 
      for (int i = 1; i < n; i++) { 
      if (mang[i].diem_tb > tb_max.diem_tb) {
          tb_max = mang[i]; 
            }
        }
        return tb_max;
    }
void sap_xep(hs_t* mang, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j=i+1;j<n;j++)
        if (mang[j].diem_tb > mang[i].diem_tb) {
            hs_t tg = mang[i];
            mang[i] = mang[j];
            mang[j] = tg;
       }
    }
}
void main() {
    hs_t mang_hs[]={
        {.ten="Nguyen van A",.tuoi=18,.diem_toan=8.0,.diem_van=6.5},
        {.ten = "Nguyen van B",.tuoi = 18,.diem_toan = 9.0,.diem_van=8.5},
        {.ten = "Nguyen van C",.tuoi = 18,.diem_toan = 7.5,.diem_van=6.0},
        {.ten = "Nguyen van D",.tuoi = 18,.diem_toan = 6.5,.diem_van=4.5},
    };
    int n = sizeof(mang_hs) / sizeof(mang_hs[0]);
    tinh_toan(mang_hs, n);
    hs_t tb_max= tim_hs_diem_tb_max(mang_hs, n);
    printf("\n");
    printf("Hoc sinh co diem tb cao nhat la : %s\n", tb_max.ten);
    printf("\n");
    sap_xep(mang_hs, n);
    printf("Danh sach hoc sinh sau khi sap xep la :\n");
    tinh_toan(mang_hs, n);
}