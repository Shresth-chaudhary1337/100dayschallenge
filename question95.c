// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string:\n");
    scanf("%s", s1);

    printf("Enter second string:\n");
    scanf("%s", s2);

    // If lengths differ → Not rotation
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }

    // Create s1+s1
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is inside temp
    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
\