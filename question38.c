// Q38: Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        int r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("sum of digits of %d is = %d",n,sum);
}