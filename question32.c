// Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int n,d,pal=0; //n to take input and d to make duplicate of n
    printf("enter number\n");
    scanf("%d",&n);
    d=n;
    while(d>0)
    {
        int r=d%10;
        pal=pal*10+r;
        d=d/10;
   }
   if(pal==n)
   printf("%d is palindrome number",n);
   else 
   printf("%d is not a palindrome number",n);
}