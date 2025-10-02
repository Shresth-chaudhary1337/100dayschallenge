// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of element you want to enter \n");
    scanf("%d",&n);
    int a[n+1];
    printf("enter elements of array in sorted manner\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int target;
    printf("enter the number which is to be insert in the array\n");
    scanf("%d",&target);
    int i;
    for(i=n-1;(i>=0 && a[i]>target);i--) //shifting array to next until we found the correct position for target
    {
        a[i+1]=a[i];
    }
    a[i+1]=target;
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
}