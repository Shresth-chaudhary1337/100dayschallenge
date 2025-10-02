// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you wanna enter in array\n");
    scanf("%d",&n);
    int a[n+1];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int pos,target;
    printf("enter the index position and number which is to be add in the array\n");
    scanf("%d %d",&pos,&target);
    for(int i=n;i>pos;i--)
    a[i]=a[i-1];
    a[pos]=target;
    printf("resulted array :- \n");
    for(int i=0;i<=n;i++)
    printf("%d ",a[i]);
}