// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int smax,max;
    if(a[0]>a[1]){
        max=a[0];
        smax=a[1];
    }
    else{
        max=a[1];
        smax=a[0];
    }
    for(int i=2; i<n; i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }

    if(n < 2) {
        printf("Array must have at least 2 elements\n");
    }
    else {
        printf("Second max element of array is: %d\n", smax);
    }

    return 0;
}