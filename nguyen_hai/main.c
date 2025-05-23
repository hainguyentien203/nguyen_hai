#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdint.h>
typedef union {
	uint16_t x;
	uint8_t byte[2];
}byte_t;
void printfbit(uint16_t value) {
	uint8_t high;
	uint8_t low;
	byte_t A;
	A.x = value;
	low = A.byte[0];
	high = A.byte[1];
	printf(" Gia tri A = 0x%x\n", A.x);
	printf(" byte low = 0x%x\n", low);
	printf(" byte high = 0x%x\n", high);
}
void main() {
	sizeof(byte_t);
	uint16_t value = 0x1234;
	printfbit(value);
}

