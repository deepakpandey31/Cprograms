#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter limit");
    int n;
    int even=0,odd=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        even+=i;
        else
        odd+=i;
    }
    printf("Sum of even: %d\nSum of odd: %d",even,odd);
}