#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <iostream>
class mang {
public:
	int* data;
	int size;
	mang(int num_item) {
		data = (int*)malloc(num_item * sizeof(int));
		size = num_item;
	}
	int& operator[](int index) {
		return data[index];
	}
	/*int operator[](int index) const {
		return data[index];
	}*/
	// viet method them mot doi tuong vao trong mang o vi tri cuoi cung
	void push_back(int val) {
		// cap phat vung nho moi lon hon vung nho cu
		int* newtemp = (int*)malloc((size + 1) * sizeof(int));
		if (newtemp == NULL) {
			throw std::runtime_error("Khong the malloc\n");
		}
		// copy du lieu tu vung nho cu sang vung nho moi va set gia tri cua doi tuong 
		for (int i = 0; i < size; i++) {
			newtemp[i] = data[i];
		}
		newtemp[size] = val;
		// huy vung nho cu
		free(data);
		// cap nhat dia chi cua vung nho moi vao con tro data
		data = newtemp;
		// cap nhat lai gia tri cua bien size
		size++;
	}
	~mang() {
		free(data);
	}
};
int tong( mang &x) {
	int sum = 0;
	for (int i = 0; i < x.size; i++) {
		sum = sum + x[i];
	}
	return sum;
}
int main() {
	mang arr(3);
	arr[0] = 1;
	arr[1] = 4;
	arr[2] = 2;
	arr.push_back(5);
	int x = tong(arr);
	printf("Tong mang x = %d\n", x);
	return 0;
}

