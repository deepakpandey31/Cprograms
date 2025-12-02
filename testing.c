#include<stdio.h>
#include<conio.h>
void main()
{
    char n[]="deepak";
    for(int i=0;i<strlen(n);i++)
    {
        if(n[i]=='e')
        printf("%c\t",n[i]);
    }
}