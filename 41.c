#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0, i = 2;
    printf("The first %d prime numbers are: ", n);
    while (count < n) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    int nth = n;
    printf("\n\nThe %dth prime number is: ", nth);
    count = 0, i = 2;
    while (count < nth) {
        if (isPrime(i)) {
            count++;
            if (count == nth) {
                printf("%d", i);
            }
        }
        i++;
    }

    return 0;
}
