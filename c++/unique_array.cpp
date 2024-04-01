#include<iostream>
using namespace std;
int return_unique(int arr[], int n)
{
    int unique=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            unique=arr[i];
        }
    }
    return unique;
}
int main()
{
    int n;
    cout<<"enter the number of size:"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the unique element in the array will be:"<<return_unique(arr,n)<<endl;

    return 0;
}