//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    
    // Read first matrix size
    printf("enter the order of matrix a\n");
    scanf("%d %d", &r1, &c1);
    
    int a[r1][c1];
    printf("enter elements of array a\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Read second matrix size
    printf("enter the order of matrix b\n");
    scanf("%d %d", &r2, &c2);
    
    int b[r2][c2];
    printf("enter the elements of array b\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrices must be of same size
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible");
        return 0;
    }

    // Addition matrices
    int sum[r1][c1];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing result
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
