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
		if (index < 0 || index >= size) {
			throw std::out_of_range("Chi so khong hop le.\n");
		}
		return data[index];
	}
	void push_back(int value) {
		int* newdata = (int*) malloc((size + 1) * sizeof(int));
		if (newdata == NULL) {
			throw std::runtime_error("Khong the malloc. \n");
		}
		for (int i = 0; i < size; i++) {
			newdata[i] = data[i];
		}
		newdata[size] = value;
		free(data);
		data = newdata;
		size++;
	}
	int pop_back(int index) {
		if (index <0 || index >= size) {
			throw std::out_of_range("Chi so khong hop le. \n");
		}
		int remove_value = data[index];
		int new_size = size - 1;
		int* new_data = nullptr;
		if (new_size > 0) {
			new_data = (int*)malloc(new_size * sizeof(int));
			if (new_data == NULL) {
				throw std::runtime_error("Khong the malloc. \n");
			}
			for (int i = 0, j = 0; i < size; ++i) {
				if (i == index) continue;
				if (j >= new_size) {
					free(new_data);
					throw std::runtime_error("Chi so vuot qua gioi han bo nho. \n");
				}
					new_data[j++] = data[i];
			}
		}
		free(data);
		data = new_data;
		size = new_size;
		return remove_value;
	}
	~mang() {
		free(data);
	}
};
int tong(mang &a) {
	int sum = 0;
	for (int i = 0; i < a.size ; i++) {
		sum = sum + a[i];
	}
	return sum;
}
int main() {
	mang arr(3);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr.push_back(4);
	arr.push_back(5);
	printf("Tong array = %d\n", tong(arr));
	printf("Phan tu bi xoa: %d\n", arr.pop_back(0));
	printf("Tong sau khi xoa: %d\n", tong(arr));
	return 0;
}

