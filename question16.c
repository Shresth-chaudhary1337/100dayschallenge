// Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  printf("%d is largest",a);
  else if(b>a && b>c)
  printf("%d is largest",b);
  else
  printf("%d is largest",c);
  return 0; 
}