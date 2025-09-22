/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include<stdio.h>
int main()
{
    int n = 3; // maximum half-height before decreasing

    // First increasing part (1, 3, 5 stars)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*\n");
        }
        printf("\n"); // blank line between blocks
    }

    // Then decreasing part (3, 1 stars)
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
