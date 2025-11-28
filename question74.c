// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int r, c;
    printf("enter order of matrix\n");
    scanf("%d %d", &r, &c);

    int a[r][c], t[c][r];
    printf("enter elements of array\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Printing transpose
    printf("transpose matrix\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
