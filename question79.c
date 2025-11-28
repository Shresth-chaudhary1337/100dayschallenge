// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("enter order of matrix\n");
    scanf("%d %d", &m, &n);

    int a[m][n];

    // Read matrix
    printf("enter elements of matrix\n");\
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // First half diagonals (starting from top row)
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < m && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Second half diagonals (starting from last column)
    for (int row = 1; row < m; row++) {
        int i = row, j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
