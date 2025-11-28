// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int n, m;
    printf("enter order of matrix\n");
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Symmetric check only possible for square matrices
    if (n != m) {
        printf("False");
        return 0;
    }

    // Reading matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
