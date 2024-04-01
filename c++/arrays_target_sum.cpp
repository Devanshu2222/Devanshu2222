// #include<iostream>
// using namespace std;
// int targetSum(int arr[], int n, int target)
// {
//     int pairs =0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j]==target)
//             {
//                 pairs++;
//             }
//         }
//     }
//     return pairs;
// }
// int main()
// { 
//     int n;
//     cout<<"Enter the elements of the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int target ;
//     cout<<"Enter the target sum you want: "<<endl;
//     cin>>target;
//     cout<<"the pairs that match the target sum are: "<<targetSum(arr,n,target);

//     return 0;
// }


// =============================find sum target using three pairs -================================

#include<iostream>
using namespace std;
int targetSum_threePairs(int arr[], int n , int target)
{
    int pairs = 0;
    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    pairs++;
                    cout<<arr[i] <<arr[j] <<arr[k]<<" ";
                }
            }
        }
    }
    return pairs;
}
int main()
{
    int n;
    cout<<"enter the elements of the array:";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the  target value : ";
    cin>>target;
    cout<<"the 3 pair sum will be:"<<targetSum_threePairs(arr,n,target);
    return 0;
}