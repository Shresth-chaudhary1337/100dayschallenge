// Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, a, temp = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    a = n;

    // Count digits
    while (a > 0) {
        count++;
        a = a / 10;
    }

    a = n;
    // Calculate sum of digits raised to 'count'
    while (a > 0) {
        int r = a % 10;
        temp = temp + pow(r, count);
        a = a / 10;
    }

    // Checking Armstrong condition
    if (n == temp)
    {   
        printf("%d is an Armstrong number\n", n);
    }
        else
        {
        printf("%d is not an Armstrong number\n", n);
        }
    return 0;
}
