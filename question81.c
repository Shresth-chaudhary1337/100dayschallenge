// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];
    
    // Read string including spaces
    printf("enter string\n");
    fgets(str, sizeof(str), stdin);

    int count = 0;

    // Count until we reach '\0' or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("number of characters:- %d", count);

    return 0;
}
