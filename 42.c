#include <stdio.h>

int main() {
    int a, b, c, n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Pythagorean triplets for n = %d:\n", n);

    for (a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {
            for (c = b + 1; c <= n; c++) {
                if (a*a + b*b == c*c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
