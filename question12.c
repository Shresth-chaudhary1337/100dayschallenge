#include<stdio.h>
int main()
{
   int n;
   printf("enter number to be check wheter positive,negative, or zero\n");
   scanf("%d",&n);
   if(n>0)
   printf("%d is postitive",n);
   else if(n<0)
   printf("%d is negative",n);
   else 
   printf("%d is zero",n);

}
