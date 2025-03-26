#include <stdio.h>
#include <string.h>
typedef struct {
	int tu;
	int mau;
}phan_so;
phan_so nhan_ps(phan_so A, phan_so B) {
	phan_so kq;
	kq.tu = A.tu * B.tu;
	kq.mau = A.mau * B.mau;
	return kq;
}
phan_so chia_ps(phan_so A, phan_so B) {
	phan_so kq;
	if (A.tu == 0) {
		printf("Khong the chia.\n");
		kq.tu = 0;
		kq.mau = 0;
	}
	else {
		kq.tu = A.tu * B.mau;
		kq.mau = A.mau * B.tu;
	}
	return kq;
}
phan_so cong_ps(phan_so A, phan_so B) {
	phan_so kq;
	kq.mau = A.mau * B.mau;
	kq.tu = A.tu * B.mau + B.tu * A.mau;
	return kq;
}
phan_so tru_ps(phan_so A, phan_so B) {
	phan_so kq;
	kq.mau = A.mau * B.mau;
	kq.tu = A.tu * B.mau - B.tu * A.mau;
	return kq;
}
int ucln(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
phan_so rut_gon(phan_so A) {
	phan_so kq;
	int uoc_chung = ucln(A.tu, A.mau);
	kq.tu = A.tu / uoc_chung;
	kq.mau = A.mau / uoc_chung;
	return kq;
}
void main() {
	phan_so A = { 1,3 };
	phan_so B = { 2,3 };
	printf("Phan so vua nhap la: %d/%d\n", A.tu, A.mau);
	printf("Phan so vua nhap la: %d/%d\n", B.tu, B.mau);
	printf("\n");
	phan_so kq_nhan = nhan_ps(A, B);
	printf("Kq nhan 2 phan so tren la: %d/%d\n", kq_nhan.tu, kq_nhan.mau);
	phan_so kq_chia = chia_ps(A, B);
	printf("Kq chia 2 phan so tren la: %d/%d\n", kq_chia.tu, kq_chia.mau);
	phan_so kq_cong = cong_ps(A, B);
	printf("Kq cong 2 phan so tren la: %d/%d\n", kq_cong.tu, kq_cong.mau);
	phan_so kq_tru = tru_ps(A, B);
	printf("Kq tru 2 phan so tren la: %d/%d\n", kq_tru.tu, kq_tru.mau);
	printf("\n");
	phan_so kq_rutgon1 = rut_gon(kq_nhan);
	printf("Kq nhan sau khi rut gon la: %d/%d\n", kq_rutgon1.tu, kq_rutgon1.mau);
	phan_so kq_rutgon2 = rut_gon(kq_chia);
	printf("Kq chia sau khi rut gon la: %d/%d\n", kq_rutgon2.tu, kq_rutgon2.mau);
	phan_so kq_rutgon3 = rut_gon(kq_cong);
	printf("Kq cong sau khi rut gon la: %d/%d\n", kq_rutgon3.tu, kq_rutgon3.mau);
	phan_so kq_rutgon4 = rut_gon(kq_tru);
	printf("Kq tru sau khi rut gon la: %d/%d\n", kq_rutgon4.tu, kq_rutgon4.mau);
}
