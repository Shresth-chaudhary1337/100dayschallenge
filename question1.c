Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main()
{
    int a,b;
    int sum=0;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    
    sum=a+b;
    printf("sum=%d",sum);

}
