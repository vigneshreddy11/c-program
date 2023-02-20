#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k, sum = 0;

    printf("Enter the number of rows and columns of matrix 2:\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of matrix 2:\n");
    int matrix1[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2:\n");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("The matrices can't be multiplied with each other.\n");
    }
    else {
        printf("Enter the elements of matrix 2:\n");
        int matrix2[p][q];
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                scanf("%d", &matrix2[i][j]);
            }
        }

        int result[m][q];

        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                for(k=0; k<p; k++){
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }

        printf("The product of the two matrices is:\n");

        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
