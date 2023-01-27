#include <stdio.h>

void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 5, y = 7, sum;
    addNumbers(&x, &y, &sum);
    printf("Sum of %d and %d is %d", x, y, sum);
    return 0;
}
