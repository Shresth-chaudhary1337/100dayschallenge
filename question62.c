// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements you want to enter \n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=(n-1);i>=0;i--)
    scanf("%d",&a[i]);
    //printing reversed array
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}