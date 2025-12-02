#include<stdio.h>
#include<conio.h>
int fact(int k)
{
    int fac=1;
    fac=fac*fact(k-1);
    return fac;
}
void main()
{
    printf("Enter number");
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}