// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

// }

// ===================sum of array ========================




// #include<iostream>
// using namespace std;
// int sum_of_arr(int n ,int arr[] ){
//     int sum=0;

//     for(int i =0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of elements you want:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"the sum of elements of array will be "<<sum_of_arr(n,arr)<<" ";

//     return 0;
// }


// ==================================== maximum element of the array =========================================


// #include<iostream>
// using namespace std;
// int max_of_arr(int n, int arr[])
// {
//     int max=arr[0];
//     for(int i =0;i<n;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the size of array:"<<" ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The elements of the array are:"<<" ";
//     for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\nthe maximum element of the array is :"<<max_of_arr(n,arr)<<" ";

//     return 0;
// }



// ======================searching an element in an array using linear search ==========================

#include<iostream>
using namespace std;

int search_element(int size, int arr[], int target) {
    for(int i = 0; i < size; i++) {
        if(target == arr[i]) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int target;
    cout << "Enter your target: ";
    cin >> target;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    int index = search_element(n, arr, target);
    if(index != -1) {
        cout << "\nTarget " << target << " found at index: " << index << endl;
    } else {
        cout << "\nTarget " << target << " not found in the array." << endl;
    }

    return 0;
}
