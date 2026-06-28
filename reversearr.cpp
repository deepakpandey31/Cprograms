#include<iostream>
using namespace std;
void print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}
void input(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cin>>arr[i];
}
int main()
{
    int size;
    cout<<"Enter size of array";
    cout<<endl;
    cin>>size;
    cout<<endl;
    cout<<"Enter elements in array";
    int ar[size];
    input(ar,size);
    print(ar,size);
    cout<<endl;
    int t=0;
    for(int i=0; i<size-i; i++)
    {
        t=ar[size-i-1];
        ar[size-i-1]=ar[i];
        ar[i]=t;
    }
    print(ar,size);
}