// Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements you want in your array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printing elements of array
    printf("elements of array\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}