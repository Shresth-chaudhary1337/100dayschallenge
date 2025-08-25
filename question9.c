#include<stdio.h>
#include<math.h>

    int main()
    {
        float p,r,t;
        float si,ci,a;
        printf("enter pricipal,rate,time in years respectively\n");
        scanf("%f %f %f",&p,&r,&t);

        printf("Simple interest = %.2f",((p*t*r)/100));
        a=p*pow(1+(r/100),(t));
        ci=a-p;
        printf("\t Coumpound interest = %.2f", ci);
        return 0;
    }
