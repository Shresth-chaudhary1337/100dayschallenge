// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k; //k denotes number of right shifts
    printf("enter the number of shifts\n");
    scanf("%d",&k);
    int rotate[n];
    k=k%n;
    for(int i=0;i<n;i++)
    {
        rotate[(i+k)%n]=a[i];
    }
    //resultant array
    printf("resultant array:- ");
    for(int i=0;i<n;i++)
    printf("%d ",rotate[i]);


}