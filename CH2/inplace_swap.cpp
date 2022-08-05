#include <iostream>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    int a,b;
    int *ap = &a;
    int *bp = &b;
    a = 10; b = 20;
    printf("Before %d, %d\n", *ap, *bp);
    inplace_swap(ap, bp);
    printf("After %d, %d\n", *ap, *bp);
    int c[5] = {1, 2, 3, 4, 5};
    reverse_array(c, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
}