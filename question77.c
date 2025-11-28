// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int  main(){
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

    // Check if square matrix
    if (m != n) {
        printf("False");
        return 0;
    }

    // Check distinct diagonal elements
    int flag = 1;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }

    if (flag)
        printf("True");
    else
        printf("False");

    return 0;
}


}