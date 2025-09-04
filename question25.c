// Q25 : Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("enter numbers and enter what you want to do with them\n");
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch)
    {
        case '+' :
        printf("sum =%d",a+b);
        break;
        case '-':
        printf("difference= %d",a-b);
        break;
        case '*':
        printf("multiplied = %d",a*b);
        break;
        case '/':
        printf("Divisions =%d",a/b);
        break;
        case '%':
        printf("mod of numbers= %d",a%b);
        break;
        default :
        printf("invalid input");
    }

}