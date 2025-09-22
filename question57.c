//Q 57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("sum of elements of array is %d",sum);
}