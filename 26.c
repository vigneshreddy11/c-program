#include <stdio.h>

#define ROWS 3
#define COLS 3

void diagonalElements(int matrix[ROWS][COLS],int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements is: %d\n", sum);
}

int main() {
    int matrix[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    printf("Diagonal elements of the matrix are: ");
    diagonalElements(matrix, ROWS);
    return 0;
}
