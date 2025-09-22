// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main()
{
    int n;
    int max=0,min;
    printf("enter number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       max=a[i];
       else if(a[i]<min)
       min=a[i];
    }
    printf("max = %d\n min = %d",max,min);
}