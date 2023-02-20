#include <stdio.h>

int main() {
   int arr[10];
   int i, n, sum = 0;
   float avg;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: \n");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
      sum += arr[i];
   }

   avg = (float) sum / n;

   printf("The sum of the elements in the array is: %d\n", sum);
   printf("The average of the elements in the array is: %.2f\n", avg);

   return 0;
}
