#include<iostream>
using namespace std;
int main()
{
    int arr[34],i,sum;
    cout<<"enter element in array:\n";

    for(i=0;i<=4; i++)
    {
        cout<<"elementn- ";
        cin>>arr[i];
    }
    for(i=0;i<=4; i++)
    {
        sum =sum+arr[i];
        
    }
    cout<<"sum of all array element is:"<<sum;

    return 0;
}