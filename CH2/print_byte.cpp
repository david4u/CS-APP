#include <stdio.h>
#include <cstring>
#include <string>

typedef unsigned char* byte_pointer;

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

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    int a = 12345;
    float b = 12345.0;
    int *c = &a;
    const char *m = "mnopqr";
    show_bytes((byte_pointer) m, strlen(m) + 1);
    printf("Integer %d : ", a);
    show_int(a);
    printf("Float %f : ", b);
    show_float(b);
    printf("Pointer : ");
    show_pointer(c);
}