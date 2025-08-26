//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d", &a,&b);
    printf("sum= %d, diff=%d,product= %d, quotient= %d", a+b,a-b,a*b,a/b);
    return 0;

}
