#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t size) {
    int i;
    for (i = 0; i < size; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

int main() {
    int x = 0x87654321;
    int w = 32;
    // problem A
    int key = 0xFF;
    int solA = key & x;
    show_int(solA);

    // problem B
    int solB = x ^ (~key);
    show_int(solB);

    // problem C
    int solC = x | (key);
    show_int(solC);
}