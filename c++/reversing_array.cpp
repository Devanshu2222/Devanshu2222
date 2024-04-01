// #include<iostream>
// using namespace std;
// int reverse(int arr[], int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<=end)
//     {
//          swap(arr[start],arr[end]);
//             start++;
//             end--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";  
//     }
//     cout<<endl; 

// }
// int main()
// {
//     int n;
//     cout<<"enter the size of array:"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"array befor reversing:"<<endl;
//     for(int i =0 ;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\nArray after reverse:"<<endl;
//     reverse(arr,n);

//     return 0;
// }
// ===========to reverse the alter elment of array ===========
#include<iostream>
using namespace std;

void reverse_alternative_element(int arr[], int n) {
    for(int i = 0; i < n; i += 2) {
        if(i + 1 < n) {
            swap(arr[i], arr[i + 1]);
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array before reversing:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nArray after reverse:" << endl;
    reverse_alternative_element(arr, n);

    return 0;
}
