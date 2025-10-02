// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter integer number\n");
    scanf("%d",&n);
    int max;
    int temp=n;
    int count=0;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    int a[count];
    temp=n;
    for(int i=0;i<count;i++)
    {
        int r=temp%10;
        a[i]=r;
        temp=temp/10;
    }
    int maxcount=0,tempcount=0;
    for(int i=0;i<9;i++)
    {
        for(int k=0;k<count;k++)
        {
            if(i==a[k])
            tempcount++;
        }
        if(tempcount>maxcount)
        {
            maxcount=tempcount;
            max=i;
        }
        tempcount=0;

    }
    printf("%d ",max);
}