// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    double sum=0.0;
    int a=2;
        int b=3;
    for(int i=1;i<=n;i++)
    {
        sum+=(double)a/b;
        a+=2;
        b+=4;
    }
    printf("Approximate sum :- %.1lf",sum);
    return 0;
}