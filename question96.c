// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {

        // If space or end of string → reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;  // last character of word

            // reverse word from start to end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;  // next word starts
        }

        if (str[i] == '\0')
            break;
    }

    printf("%s", str);
    return 0;
}
