#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("It's a perfect number");
    else
    printf("not a perfect number");
    return 0;
}