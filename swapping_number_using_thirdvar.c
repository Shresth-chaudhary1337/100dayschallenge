//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b respectively\n");
    scanf("%d %d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swap %d %d", a,b);

}
