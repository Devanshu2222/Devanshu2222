// #include<iostream>
// using namespace std;
// int search_number(int arr[], int n, int target)
// {
//     int lo=0;
//     int hi=n-1;
//     int mid;
//     while(lo<=hi)
//     {
//         mid=(lo+hi)/2;
//         if(arr[mid]==target)
//         {
//             return mid;
//         }
//         else if(target>arr[mid])
//         {
//             lo=mid+1;
//         }
//         else
//         {
//             hi=mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int target;
//     cout<<"enter the target you want ";
//     cin>>target;
//     int n;
//     cout<<"enter the number of elements in the array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     int result = 0;
//     result = search_number(arr, n , target);
//     if (result == -1)
//         printf("Element is not present in array");
//     else
//         cout << "Element is present at index " << result; 
    
//     return 0;
// }

// ------------------------------------------ lower bound in binary search---------------------------------------
#include<iostream>
using namespace std;
int lower_bound(int arr[],int target,int n)
{
    int hi=n-1;
    int lo=0;
    int ans = n;
    int mid;
    while(lo>=hi)
    {
        mid=(hi+lo)/2;
        if(arr[mid]==target)
        {
            ans=mid;
        }
        else 
        {
            lo=mid+1;

        }
    }
    return ans;

}
int main()
{
    int target ;
    int n;
    cin>>n>>target;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    lower_bound(arr,target,n);
    
    return 0;
}