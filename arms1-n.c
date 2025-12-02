#include<stdio.h>
#include<conio.h>
int digit(int k)
{
    int c=0;
    while(k!=0)
    {
        k/=10;
        c++;
    }
    return c;
}
int power(int k,int l)
{
    int sum=1,c=1;
    while(c<=l)
    {
        sum*=k;
        c++;
    }
    return sum;
}
int arm(int k)
{
    int ck=k,sum=0;
    while(k!=0)
    {
        int l=k%10;
        sum+=power(l,digit(ck));
        k/=10;
    }
    return sum;
}
void main()
{
    int n;
    printf("Enter end value: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {   
        if(arm(i)==i)
        printf("%d\t",i);
    }

}