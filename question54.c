/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include<stdio.h>
int main()
{
    int n=4;
    int s=3;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=s;k++)
        printf(" ");
        for(int j=1;j<=(2*i-1);j++)
        printf("*");
        printf("\n");
        s--;
    }
    s=1;
    for(int i=n-1;i>=1;i--)
    {
        for(int k=1;k<=s;k++)
        printf(" ");
        for(int j=1;j<=(2*i-1);j++)
        printf("*");
        printf("\n");
        s++;
    }
}