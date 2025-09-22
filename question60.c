// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main()
{
    int n;
    int pos,neg,zero;
    pos=neg=zero=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        neg++;
        else if(a[i]>0)
        pos++;
        else
        zero++;
    }
    printf("number of positive = %d\nnumber of negative = %d\nnumber of zero = %d",pos,neg,zero);

}