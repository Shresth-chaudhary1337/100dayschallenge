// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter character to check whether it is vowel or consonant\n");
    scanf("%c",&ch);
    
   ch=tolower(ch);
   if(ch>=97 && ch<=122)
   {
   if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
   printf("entered character is vowel");
   else 
   printf("entered character is consonant");
   }
else
printf("entered character is special character or a number");
return 0;
}

 /*
    int x=("%d",ch);
    printf("%d",x);
    if(x>=97 && x<=122)
    { 
    x-=32;
    ch=("%c",x);
    printf("\n%c",ch);
    }*/