// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter order of matrix\n");
    scanf("%d %d",&a,&b);
    int n[a][b];
    printf("enter elements of array\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("entered array:-\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    
}