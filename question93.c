//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};

    printf("Enter first string:\n");
    scanf("%s", str1);

    printf("Enter second string:\n");
    scanf("%s", str2);

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    // Count frequencies for str1
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        freq[ch - 'a']++;
    }

    // Subtract frequencies for str2
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        freq[ch - 'a']--;
    }

    // If all freq values are zero -anagram
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
