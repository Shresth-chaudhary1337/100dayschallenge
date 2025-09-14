// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3
*/
#include<stdio.h>
int main()
{
    int n;
    double sum=0.0;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num=2*i-1;
        int den;
        if(i==1)
        den=1;
        else
        den=2*i;
        sum+=(double)num/den;
    }
    printf("approximate sum= %.1lf",sum);
    return 0;
}