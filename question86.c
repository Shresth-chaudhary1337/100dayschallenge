//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, len = 0;

    printf("enter string\n");
    fgets(str, sizeof(str), stdin);

    // remove newline character if present
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // find length manually
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // make reversed string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    // compare manually
    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            printf("Not palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
