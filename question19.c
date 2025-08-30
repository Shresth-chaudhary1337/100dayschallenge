#include<stdio.h>
int main()
{
    int a,b,c; //a,b,c as sides of triangle
    printf("enter sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
    printf("Triangle is possible\n");
     if(a==b && b==c)
    printf("equilateral");
    else if (a == b || b == c || a == c) 
      printf("Isosceles triangle\n");
    else 
    printf("Scalene");
    }
    else 
    printf("Triangle not possible");
    return 0;
}
