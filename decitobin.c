#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter number: ");
    int n,c=0;
    int ar[100];
    c=0;
    scanf("%d",&n);
    while(n!=0)
    {
      if(n%2==0)
      ar[c++]=0;
      else
      ar[c++]=1;
      n/=2;
    }
    printf("\nBinary value is: ");
    for(int i=c-1;i>=0; i--)
    printf("%d",ar[i]);
}