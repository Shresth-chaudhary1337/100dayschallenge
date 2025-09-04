// Q30: Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("enter number which is to be reversed\n");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reversed number is %d",rev);
    return 0;
}
