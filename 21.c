#include <stdio.h>

int main()
{
    int num, sum = 0, length = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
        length++;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Length of number: %d\n", length);

    return 0;
}
