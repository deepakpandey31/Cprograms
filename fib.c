#include<stdio.h>
#include<conio.h>
int a=0,b=1,c,t=0;
int fibo(int n)
{
    if(t<n+2)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        printf("a3");
        return fibo(++t);
    }
    if(t==n+2)
    return 0;

}
void main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
}