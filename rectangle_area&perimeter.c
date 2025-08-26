//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
void main()
{
    int l=0,b=0;
    printf("enter length and breadth respectively \n");
    scanf("%d %d", &l,&b);
    printf("area of rectangle is %d metre square and perimeter of rectangle is %d  metre\n", l*b,(2*(l+b))); 
    

}
