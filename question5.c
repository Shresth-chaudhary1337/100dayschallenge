#include<stdio.h>
int main()
{
    float c=0;
    printf("enter temperature in celsius\n");
    scanf("%f",&c);
    printf("fahrenheit= %f",(c*1.8+32));
    return 0;
}