// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of elements for 1st array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of 1st array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter number of elements of 2nd array\n");
    scanf("%d",&m);
    int b[m];
    printf("enter elements of 2nd array\n");
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    int ab[n+m];//creating merged array
    int j=0;

    for(int i=0;i<n+m;i++)
    {
        if(i<n)
        ab[i]=a[i];
        else 
        {
        ab[i]=b[j];
        j++;
        }
    }
    //merged array 
    printf("merged array is \n");
    for(int i =0;i<n+m;i++)
    printf("%d ",ab[i]);
}