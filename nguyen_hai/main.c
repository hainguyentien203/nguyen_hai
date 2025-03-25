#include <stdio.h>
#include <string.h>

typedef struct {
    char* ten;
    int tuoi;
    float diem_toan;
    float diem_van;
    float diem_tb;
    float xep_loai;
} hs_t;
hs_t tinh_toan(hs_t* mang, int sl) {
    float diem_tb = ((float)diem_toan + (float)diem_van) / 2;
    float xep_loai = 0;
    for (int i = 0; i < sl; i++) {
        if (mang[i].diem_tb >= 8.0) { mang[i].xep_loai = 0; }
        if (mang[i].diem_tb >=6.5) { mang[i].xep_loai = 1; }
        if (mang[i].diem_tb >= 5) { mang[i].xep_loai = 2; }
        else mang[i].xep_loai = 3;
    }

}
void main() {
    hs_t mang_hs[]{
        {"Nguyen van A",18,8.0,6.5},
        {"Nguyen van B",18,7.0,6.5},
        {"Nguyen van C",18,8.9,8.0},
        {"Nguyen van D",18,8.0,9.5},
    };
}