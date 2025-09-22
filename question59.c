// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main()
{
    int n;
    int odd=0,even=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of elements\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("number of even = %d\nnumber of odd= %d",even,odd);
    
}