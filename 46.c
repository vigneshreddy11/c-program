#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 6;
    
    printf("Before swapping, x = %d and y = %d\n", x, y);
    
    swap(&x, &y);
    
    printf("After swapping, x = %d and y = %d\n", x, y);
    
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
