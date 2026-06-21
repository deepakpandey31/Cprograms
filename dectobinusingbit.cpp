#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int c=1;
    cout<<"Enter number\n";
    cin>>n;
    int m=n;
    int bin=0;
    while(n!=0)
    {
        int k=n&1;
        bin=(k*c)+bin;
        c*=10;
        n=n>>1;
    }
    cout<<"Binary value of "<<m<<" is "<<bin;
}