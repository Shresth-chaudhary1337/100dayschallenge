#include<stdio.h>
int main()
{
    int cp,sp; // cp as cost price and sp as selling price
    float a;// using single variable for profit as well as loss
    printf("enter Cost price and selling price\n");
    scanf("%d %d",&cp,&sp);
    if(sp>cp)
    {
        a=((sp-cp)*100.0)/cp;
        printf("Profit = %.2f%%",a);
    }
    else if(cp>sp)
    {
        a=((cp-sp)*100.0)/cp;
        printf("Loss = %.2f%%",a);
    }
    else
    printf("There is no profit and loss");
    return 0;
}