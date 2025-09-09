// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int n,oddproduct=1,count=0;
    printf("enter number\n");
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        int r=temp%10;
        if(r%2!=0)
        {
            count++;
            oddproduct=oddproduct*r;

        }
        temp=temp/10;
}
if(count==0)
printf("There is no odd digit available in the %d",n);
else
printf("Product of odd digits of %d is = %d",n,oddproduct);
}