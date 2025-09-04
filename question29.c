// Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n,f=1;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    f=f*i;
    printf("Factorial of %d is %d",n,f);
    return 0;
}