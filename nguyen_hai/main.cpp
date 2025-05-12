#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
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
	int operator[](int index) const {
		return data[index];
	}
	~mang() {
		free(data);
	}
};
int tong(const mang &x) {
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
	int x = tong(arr);
	printf("Tong mang x = %d\n", x);
	return 0;
}

