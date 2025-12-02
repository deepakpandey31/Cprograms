#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter binary value");
    long n;
    scanf("%ld",&n);
    int c=0,sum=0;
    while(n!=0)
    {
        int k=n%10;
        if(k==1)
        sum=sum+pow(2,c);
        c++;
        n/=10;
    }
    printf("\nDecimal value is: %d",sum);
}