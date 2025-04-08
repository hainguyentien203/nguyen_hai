#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef union {
	unsigned short x;
	unsigned char byte[2];
	/*struct {
		unsigned char low;
		unsigned char high;
	};*/
}union_t;

void main() {
	unsigned short value = 0x1234;
	unsigned char high;
	unsigned char low;
	union_t A;
	A.x = value;
	low = A.byte[0];
	high = A.byte[1];
	printf("Gia tri A = 0x%X\n", A.x);
	printf("Byte low = 0x%X\n", low);
	printf("Byte high = 0x%X\n", high);
}
