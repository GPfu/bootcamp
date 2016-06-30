#include <stdio.h>

void swap(int *a0, int *b0) {
    int temp;
    temp = *a0;
    *a0 = *b0;
    *b0 = temp;


}

int main() {
    int a = 5;
    int b = 10;

    printf("a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
