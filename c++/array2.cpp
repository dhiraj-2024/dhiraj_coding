#include<iostream>
using namespace std;
int main()
{
    int arr[40],i;
    cout<<"enter elements in array :\n";
    for(i=0;i<=4;i++)
    {
        cout<<"\nelement-"<<i+1<<"=";
        cin>>arr[i];
    }
    cout<<"\nabove elements in reverse order are:";
    for(i=4;i>=0;i--)
    {
        cout<<"\nelement="<<arr[i];
    }
    return 0;
}