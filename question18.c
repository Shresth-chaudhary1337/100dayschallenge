//Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main()
{
   int marks;
   printf("enter marks\n");
   scanf("%d",&marks);
   if(marks>=90)
   printf("grade A");
   else if(marks>=70 && marks<90)
   printf("grade B");
   else if(marks>50 && marks<70)
   printf("grade D");
   else
   printf("grade F");
   return 0;
}