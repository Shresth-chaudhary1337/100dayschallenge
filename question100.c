//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {          // starting index
        for (int j = i; j < n; j++) {      // ending index
            for (int k = i; k <= j; k++) { // print characters from i to j
                printf("%c", str[k]);
            }
            if (!(i == n-1 && j == n-1))   // avoid last comma
                printf(",");
        }
    }

    return 0;
}
