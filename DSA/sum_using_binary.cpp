#include<iostream>
using namespace std;
int sum(int target,int arr[], int n)
{
    int lo=0;
    int hi=n+1;
    int mid;
    while (lo<hi)
    {
        mid=(lo+hi)/2;
        if(arr[mid]==target)
        {
            return 1;
        }
        else if(arr[mid]<target)
        {
         lo=mid+1;
        }
        else {
            hi=mid;
        }
    }
}
int main()
{
    int target;
    cout<<"Enter the tagret value:"<<endl;
    cin>>target;
    int n;
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sum(target,arr,n);
}

#include <iostream>

using namespace std;

int findFirstMissingPositive(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the middle element is not at its correct index,
        // it means there's a missing positive number before it.
        if (arr[mid] != mid + 1) {
            high = mid - 1;
        } else {
            low = mid + 1;  // Search for missing number in the right subarray
        }
    }

    // If all elements are at their correct indices, the first missing number is n + 1
    return low + 1;
}

int main() {
    int arr[] = {10, -2, 3, 1, 4, 9, -5, 6, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findFirstMissingPositive(arr, n);

    cout << "The first missing positive natural number is: " << missingNumber << endl;

    return 0;
}
