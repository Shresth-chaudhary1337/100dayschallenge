//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>

    int main()
    {
        float p,r,t;//p for principal, r for rate,t for time
        float si,ci,a;//si for simple interesr,ci for compound interest,a for amount
        printf("enter principal,rate,time in years respectively\n");
        scanf("%f %f %f",&p,&r,&t);

        printf("Simple interest = %.2f",((p*t*r)/100));
        a=p*pow(1+(r/100),(t));
        ci=a-p;
        printf("\t Coumpound interest = %.2f", ci);
        return 0;
    }


