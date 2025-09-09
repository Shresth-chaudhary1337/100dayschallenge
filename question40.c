// Q40: Write a program to find the 1’s complement of a binary number and print it.
// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);   // read as string

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '1')
            binary[i] = '0';
        else if (binary[i] == '0')
            binary[i] = '1';
        else {
            printf("Invalid binary digit: %c\n", binary[i]);
            return 1; // exit if input is not binary
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
