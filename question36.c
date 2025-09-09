// Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    int small;
    if(n1>=n2)
    small=n2;
    else
    small=n1;
    for(int i=1;i<small;i++)
    {
        if(n1%i==0 && n2%i==0)
         temp=i;
        
    }
    printf("HCF= %d",temp);
    
}