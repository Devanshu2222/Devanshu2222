#include<iostream>
using namespace std;
int even(int arr[],int a)
{

    int lo=0;
    int hi=a-1;
    int mid;
    while(lo < hi)
    {
        mid=(lo+hi)/2;
        if(arr[mid] % 2 != 0){
            lo = mid + 1;
        }
        else if(arr[mid] % 2 == 0){
            hi = mid;
        }
    }
    return lo;
}
int main()
  {

    int a;
    cout<<"Enter the number of elements you want in array:";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        cout<<even(arr,a);
    
  }