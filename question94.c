// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxlen = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    while (1) {
        // If character is space or end of string, a word ended
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // close the word

            int len = strlen(word);
            if (len > maxlen) {
                maxlen = len;
                strcpy(longest, word);  // save longest word
            }

            j = 0; // reset for next word
            if (str[i] == '\0')
                break; // stop after full string processed
        }
        else {
            word[j++] = str[i]; // build current word
        }
        i++;
    }

    printf("Longest word: %s", longest);
    return 0;
}
