// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the order of elementrs of array\n");
    scanf("%d %d",&a,&b);
    int n[a][b];
    printf("enter the elements of array\n");
    int sum=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            scanf("%d",&n[i][j]);
            sum=sum+n[i][j];
        }
    }
    printf("sum of all elements of array :-%d",sum);
}