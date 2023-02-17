#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define the array of numbers
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Calculate the mean
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = (float)sum / n;
    printf("Mean = %.2f\n", mean);

    // Calculate the median
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float median;
    if (n % 2 == 0) {
        median = (float)(arr[(n/2)-1] + arr[n/2]) / 2;
    } else {
        median = (float)arr[n/2];
    }
    printf("Median = %.2f\n", median);

    // Calculate the mode
    int mode = arr[0];
    int count = 1;
    int max_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                mode = arr[i-1];
            }
            count = 1;
        }
    }
    if (count > max_count) {
        max_count = count;
        mode = arr[n-1];
    }
    printf("Mode = %d\n", mode);

    return 0;
}
