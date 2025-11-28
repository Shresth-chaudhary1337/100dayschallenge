Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {

        // if lowercase → convert to uppercase
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // if uppercase → convert to lowercase
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Toggled string:\n%s", str);

    return 0;
}
