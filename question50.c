/* Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(k=1;k<=i;k++)
        printf(" ");
        for(j=5;j>i;j--)
        printf("*");
        printf("\n");
    }
}