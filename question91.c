//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // uppercase to lowercase
        }
    }

    // Remove vowels
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            continue;  // skip vowels
        }
        else {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing vowels:\n%s", result);

    return 0;
}
