//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
int main(){
    char str[1000];
    int len=0;
    printf("enter string\n");
    fgets(str,sizeof(str),stdin);
    char rev[1000];
    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    // reverse string
    int j = 0;
    for(int i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';   // end the reversed string

    printf("Reversed string: %s\n", rev);


}