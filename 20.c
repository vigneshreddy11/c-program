#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];
    int sum = 0, length;

    printf("Enter a number: ");
    scanf("%s", num);

    length = strlen(num);
    for (int i = 0; i < length; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            sum += num[i] - '0';
        }
    }

    printf("Sum of digits: %d\n", sum);
    printf("Length of number: %d\n", length);

    return 0;
}
