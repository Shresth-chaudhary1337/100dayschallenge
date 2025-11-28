//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("enter name\n");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    char word[50];
    int j = 0;

    for (int i = 0; i <= strlen(str); i++) {

        // if space or end of string full word completed
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // end the current word

            // if not the last word → print initial
            if (str[i] == ' ') {
                printf("%c.", toupper(word[0]));
            }
            else {  
                // last word → print full
                printf("%s", word);
            }

            j = 0;  // reset index for next word
        }
        else {
            word[j++] = str[i];
        }
    }

    return 0;
}
