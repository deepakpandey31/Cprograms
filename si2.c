#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter principle amount, rate, time(in years)");
    int p,t;
    double r;
    scanf("%d",&p);
    scanf("%f",&r);
    scanf("%d",&t);
    printf("Enter frequency for CI");
    double f;
    r=r/100;
    scanf("%d",&f);
    double ci=1.0;
    double k=f*t;
    while(k>0)
    {
      ci=ci*((1+(r/f)));
      k--;
    }
    ci=p*ci;
    printf("CI is: %f",ci);
}