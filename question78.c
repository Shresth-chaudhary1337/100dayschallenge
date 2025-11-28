// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("enter order of matrix\n");
    scanf("%d %d", &m, &n);

    int a[m][n];

    // Read matrix
    printf("enter elements of array\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // If not square, diagonal sum is not valid
    if (m != n) {
        printf("Invalid");
        return 0;
    }

    int sum = 0;

    // Sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}
