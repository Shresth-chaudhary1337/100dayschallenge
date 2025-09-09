// Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int n,bin=0,p=1;
    printf("enter number which is to convert in binary\n");
    scanf("%d",&n);
    if(n==0)
    {
    printf("Binary of 0 is 0");
    return 0;
    }
     while(n>0)
     {
        int r=n%2;
        bin=bin+r*p;
        p=p*10;
        n=n/2;
     }
     printf("equivalent binary number is %d",bin);
}