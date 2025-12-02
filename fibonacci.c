#include<stdio.h>
#include<conio.h>

    void main()
    {
        int a=0,b=1,c,t;
        printf("0\t");
        for(int i=1;i<=10;i++)
        {
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
    }
