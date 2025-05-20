#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
enum gioitinh_e {
	NAM,
	NU
};
class thongtincanhan {
	string ten;
	int tuoi;
	gioitinh_e gioitinh;
public:
	void set_ten(string _ten) {
		ten = _ten;
	}
	string get_ten() {
		return ten;
	}
	void set_tuoi(int _tuoi) {
		tuoi = _tuoi;
	}
	int get_tuoi() {
		return tuoi;
	}
	void set_gioitinh(gioitinh_e gt) {
		gioitinh = gt;
	}
	string get_gioitinh() {
		return gioitinh == NAM ? "Nam" : "Nu";
	}
};
class hocsinh : public thongtincanhan {
	float diemtoan;
	float diemvan;
public: 
	void set_diemtoan(float _diemtoan) {
		diemtoan = _diemtoan;
	}
	float get_diemtoan() {
		return diemtoan;
	}
	void set_diemvan(float _diemvan) {
		diemvan = _diemvan;
	}
	float get_diemvan() {
		return diemvan;
	}
	float diemtrungbinh() {
		return (diemtoan + diemvan) / 2;
	}
	hocsinh(string ten, int tuoi, gioitinh_e gioitinh, float diem_toan, float diem_van) {
		set_ten(ten);
		set_tuoi(tuoi);
		set_gioitinh(gioitinh);
		diemtoan = diem_toan;
		diemvan = diem_van;
	}
};
class giaovien : public thongtincanhan {
	float bacluong;
public:
	void set_bacluong(float bac_luong) {
		bacluong = bac_luong;
	}
	float get_bacluong() {
		return bacluong;
	}
};
int main() {
	//thongtincanhan A;
	//A.set_ten("Nguyen Van A");
	//A.set_tuoi(18);
	//A.set_gioitinh(NAM);
	////cout << "ten: " << A.get_ten() << endl;
	vector<hocsinh> A = {
		{"Nguyen Van A", 18, NAM , 8 , 8},
		{"Nguyen Thi B", 18, NU , 8 , 10},
		{"Nguyen Van C", 18, NAM , 8 , 9},
		{"Nguyen Van D", 18, NAM , 7 , 8},
		{"Nguyen Van E", 18, NAM , 10 , 10}
	};
	sort(A.begin(), A.end(), [](hocsinh A,hocsinh B) {
		if (A.diemtrungbinh() > B.diemtrungbinh())
			return true;
		else return false;
		});
	cout << "3 hoc sinh co diem trung binh cao nhat la: " << endl;
	cout << A[0].get_ten() <<" : diem trung binh la: "<< A[0].diemtrungbinh() << endl;
	cout << A[1].get_ten() << " : diem trung binh la: " << A[1].diemtrungbinh() << endl;
	cout << A[2].get_ten() << " : diem trung binh la: " << A[2].diemtrungbinh() << endl;
	return 0;
}

