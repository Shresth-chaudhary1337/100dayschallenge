// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    char ch;
    printf("enter string\n");
    fgets(str,sizeof(str),stdin);
    printf("enter character of which frequency to be found\n");
    ch=getchar();
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch)
        count++;
    }
    printf("frequency = %d",count);

}

