// Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() 
{
    int n;

    // Prompt the user to enter a number
    printf("Enter a number (1-7) \n");
    scanf("%d", &n);

    // Using switch-case statement to display the day of the week
    switch (n) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}