#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
class phan_so {
public:
	int tu;
	int mau;
	phan_so nhan_ps(phan_so khac);
	phan_so chia_ps(phan_so khac1);
	phan_so cong_ps(phan_so khac2);
	phan_so tru_ps(phan_so khac3);
	phan_so rut_gon();
	phan_so so_sanh(phan_so khac4);
};
phan_so phan_so::nhan_ps(phan_so khac) {
	phan_so kq;
	kq.tu = tu* khac.tu;
	kq.mau = mau* khac.mau;
	return kq.rut_gon();
}
phan_so phan_so::chia_ps(phan_so khac1) {
	phan_so kq;
	kq.tu = tu * khac1.mau;
	kq.mau = mau * khac1.tu;
	return kq.rut_gon();
}
phan_so phan_so::cong_ps(phan_so khac2) {
	phan_so kq;
	kq.tu = (tu * khac2.mau) + (khac2.tu * mau);
	kq.mau = mau * khac2.mau;
	return kq.rut_gon();
}
phan_so phan_so::tru_ps(phan_so khac3) {
	phan_so kq;
	kq.tu = (tu * khac3.mau) - (khac3.tu * mau);
	kq.mau = mau * khac3.mau;
	return kq.rut_gon();
}
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
phan_so phan_so::rut_gon() {
	phan_so kq;
	kq.tu = tu;
	kq.mau = mau;
	int ucln = gcd(abs(kq.tu), abs(kq.mau));
	kq.tu = kq.tu / ucln;
	kq.mau = kq.mau / ucln;
	if (kq.mau < 0) {
		kq.tu = -kq.tu;
		kq.mau = -kq.mau;
	}
	return kq;
}
phan_so phan_so::so_sanh(phan_so khac4) {
	phan_so kq;
	int phan_so_1 = tu * khac4.mau;
	int phan_so_2 = mau * khac4.tu;
	if (phan_so_1 > phan_so_2) {
		kq.tu = 1;
		kq.mau = 1;
	}
	else if (phan_so_1 < phan_so_2) {
		kq.tu = -1;
		kq.mau = 1;
	}
	else {
		kq.tu = 0;
		kq, mau = 1;
	}
	return kq;
}
int main() {
	phan_so A;
	phan_so B;
	A.tu = 1;
	A.mau = 2;
	B.tu = 3;
	B.mau = 4;
	phan_so C;
	C =	A.nhan_ps(B);
	phan_so D;
	D = A.chia_ps(B);
	phan_so E;
	E = A.cong_ps(B);
	phan_so F;
	F = A.tru_ps(B);
	printf("C = %d/%d\n", C.tu, C.mau);
	printf("D = %d/%d\n", D.tu, D.mau);
	printf("E = %d/%d\n", E.tu, E.mau);
	printf("F = %d/%d\n", F.tu, F.mau);
	phan_so SS;
	SS = A.so_sanh(B);
	if (SS.tu == 1) {
		printf("A > B\n");
	}
	else if (SS.tu == -1) {
		printf("A < B\n");
	}
	else printf("A = B \n");
	return 0;
}

