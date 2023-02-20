#include <stdio.h>

// Function to reverse a number
int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("The reverse of %d is %d\n", num, rev);
    return 0;
}
