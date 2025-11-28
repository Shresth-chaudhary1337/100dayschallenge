//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // convert to lowercase

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if(freq[ch - 'a'] == 2) {  
                printf("First repeating lowercase alphabet: %c", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found");
    return 0;
}
