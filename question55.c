// Q55: Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int count;
    for(int i=1;i<=n;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("%d ",i);
    }
}
