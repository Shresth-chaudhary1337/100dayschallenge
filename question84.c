//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // if character is lowercase (a–z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }
}

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    scanf("%s", str);

    toUpperCase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
