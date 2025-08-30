//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
   double a,b,c,discriminant,r1,r2,rpart,ipart;
   /*a,b,c are for coeficients and r1,r2 are for roots rpart is for real part of imaginary root and 
   ipart is for imaginary part*/
   printf("enter coefficient a,b,c\n");
   scanf("%lf %lf %lf",&a,&b,&c);
   discriminant=b*b-4*a*c;
   if(discriminant>0)
   {
    printf("roots are real and distinct\n");
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b-sqrt(discriminant))/(2*a);
    printf("root 1= %.2lf\n root 2= %.2lf",r1,r2);
   }
   else if(discriminant==0)
   {
    printf("roots are real and equal\n");
    r1=r2=-b/(2*a);
    printf("root=%.2lf",r1);
   }
   else{
    printf("roots are complex");
   }
   return 1;
}