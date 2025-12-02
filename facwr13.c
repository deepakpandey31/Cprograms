#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int fact=1;
    printf("Enter number");
    scanf("%d",&n);
    if(n==0)
    printf("0");
    else if(n==1)
    printf("1");
    else
    {
        while(n!=1)
        {
            fact=fact*n--;
        }
        printf("%d",fact);
    }
}