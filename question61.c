// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n,f=0;
    printf("enter number of elements you want to enter in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter number which is to be searched\n");
    int target;
    scanf("%d",&target);
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
          f=1;
         break;
        }
        else 
        f=0;
    }
    if(f==1)
    printf("number found at index %d\n",i);
    else 
    printf("number not found\n");
return 0;
}