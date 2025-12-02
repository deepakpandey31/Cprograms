#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int x=n/2;
    if((2*x)-1==n||(2*x)+1==n)
    printf("odd");
    else
    printf("even");
}