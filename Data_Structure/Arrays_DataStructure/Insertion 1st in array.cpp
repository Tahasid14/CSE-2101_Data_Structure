#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,8},n,inst;
    n=(sizeof(arr)/sizeof(arr[0]));
    cout<<"The Given Array ="<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nWhich number do you want to insert at array 1st position"<<endl;
    cin>>inst;

    for (int i = n-1 ; i >= 0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=inst;
    cout<<"After insertion the Array : ";

    for (int i = 0; i < n+1; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}