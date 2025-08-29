//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
    int main()
    {
        int i,sum=0,n;
        printf("enter number of naturals to be added \n");
        scanf("%d", &n);
        for(i=0;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("sum of %d natural numbers is %d", n,sum);
        return 0;
    }

