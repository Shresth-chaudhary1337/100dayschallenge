// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Read size of first matrix
    printf("enter order of matrix a\n");
    scanf("%d %d", &m1, &n1);

    int a[m1][n1];

    // Read first matrix
    printf("enter elements of matrix a\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read size of second matrix
    printf("enter order of matrix b\n");
    scanf("%d %d", &m2, &n2);

    int b[m2][n2];

    // Read second matrix
    printf("enter elements ofmatrix a");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check multiplication possibility
    if(n1 != m2) {
        printf("Multiplication not possible");
        return 0;
    }

    int c[m1][n2];

    // Initialize result matrix to 0
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            for(int k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
