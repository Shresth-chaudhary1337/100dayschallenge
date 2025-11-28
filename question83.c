// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    // Read string including spaces
    printf("enter string\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        // Skip newline character from fgets
        if (str[i] == '\n')
            break;

        // Check alphabet only
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z')) {

            // Convert to lowercase for easy checking
            char ch = str[i];
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            // Check vowel
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
