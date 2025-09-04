//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
#include<string.h>
int main()
{
    int n,product=1;
    char ch[100]="";
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       if(i%2==0)
       {
         char temp[50];
         sprintf(temp, "%d * ", i);   // store current number with *
         strcat(ch, temp); 
        product*=i;
    }
}
/*int len = strlen(ch);
if (len > 0) {
    ch[len - 1] = '\0';  // replace last char with string terminator
}
*/
    char temp[100];
    int len=strlen(ch);
    substring(ch,0,len-1,temp);
    strcpy(ch,temp);
     printf("%d  %s",product,ch);
    return 0;
}