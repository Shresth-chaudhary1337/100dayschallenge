// Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter number\n");
    scanf("%d",&n);
    if(n<=1)
    printf("not prime");
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        if(count>2)
        break;
        }
        else 
        continue;
    }
    if (count==2)
    printf("it is a prime number");
    else 
    printf("it is not a prime number");
}