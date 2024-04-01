// #include<iostream>
// using namespace std;
// int unique_number_inArray(int arr[], int n)
// {
//     int unique=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 arr[i]=arr[j]=-1;
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>=0){
//             unique=arr[i];
//         }
//     }
//     return unique;
// }
// int main()
// {
//     int n;
//     cout<<"enter the number of elements in array:";
//     cin>>n;

//     int arr[n];
//     for(int  i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The unique element is:"<<unique_number_inArray(arr,n);
//     return 0;
// }



// =======================finding the second largets number using manipulation==============================
// #include<iostream>
// using namespace std;
// int maxElementIndex(int arr[],int n)
// {
//     int max=arr[0];
//     int maxindex=-1;
//     for(int i =0;i<n;i++)
//     {
//         if(arr[i]>max){
//             max=arr[i];
//             maxindex=i;
//         }
//     }
// return maxindex;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int indexOfMaxElement=maxElementIndex(arr,n);
//     arr[indexOfMaxElement]=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==indexOfMaxElement)
//         {
//             arr[i]=-1;
//         }
//     }
//     int secondMax=maxElementIndex(arr,n);
//     cout<<"the second max element is :"<<arr[secondMax]<<endl;
//     return 0;
// }




//=============triveare the array one time====================
// #include<iostream>
// using namespace std;
// int second_max(int arr[],int n)
// {
//     int max=arr[0];
//     int secondMax=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>secondMax &&  arr[i]!=max)
//         {
//             secondMax=arr[i];
//         }
//     }
//     return secondMax;
//     return max;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The Second Max Element Is:"<<second_max(arr,n)<<endl;
//     return 0;
// 





// sum of elements of array
#include<iostream>
using namespace std;
int sum_of_array(int arr[],int n)
{
    int sum=0;
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the sum of elements of array will be: "<<sum_of_array(arr,n)<<endl;
    return 0;
}