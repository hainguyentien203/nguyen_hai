#include <stdio.h>
#include <string.h>

struct ps {
    int x;
    int y;
};

struct ps nhan_ps(struct ps A, struct ps B) {
    struct ps kq;
    kq.x = A.x * B.x;
    kq.y = A.y * B.y;
    return kq;
}

void main() {
    struct ps A;
    struct ps B;
    A.x = 1;
    A.y = 2;
    B.x = 3;
    B.y = 4;

    struct ps C = nhan_ps(A, B);
    printf("Ket qua la: %d/%d\n", C.x, C.y);
}