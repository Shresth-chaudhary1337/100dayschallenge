#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    int temp=n; //copying original number in another variable
    while(temp>0)
    {
        int fact=1;
        int r=temp%10;
        for(int i=1;i<=r;i++)
        {
           fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if(sum==n)
    printf("It's a perfect number\n");
    else
    printf("not a strong number");
    return 0;
}