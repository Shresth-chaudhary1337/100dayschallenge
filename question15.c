/* Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet
, digit, or special character.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character\n");
    scanf("%c",(int)&ch);
    if(ch>=65 && ch<=90)
    printf("uppercase");

    else if(ch>=97 && ch<=122)
    printf("lowercase");

    else if(ch>=48 && ch<=57)
    printf("digit");

    else
    printf("special character");
    return 0;
}