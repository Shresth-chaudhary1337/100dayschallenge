// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/      
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements you wanna enter\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int target;
    printf("Enter the element you wanna delete in the array\n");
    scanf("%d",&target);

    int pos=-1;

    // Find position of target
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            pos=i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found\n");
        return 0;
    }

    // Shift elements left
    for(int i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }

    // Print new array
    printf("Resultant array:\n");
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);

    printf("\n");
    return 0;
}
