//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements of array you want to enter\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array in sorted manners\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int target;
    printf("enter number which is to be searched\n");
    scanf("%d",&target);
    int s=0,m,l=n-1;
    int f=0;
    while(s<=l)
    {
        m=(s+l)/2;

        if(target>a[m])
        {
            s=m+1;
        }
        else if(target==a[m])
        {
            f=1;
            break;
        }
        else if(target<a[m])
        l=m-1;
        
    }
    if(f==1)
    printf("found\n");
    else
    printf("not found\n");
}