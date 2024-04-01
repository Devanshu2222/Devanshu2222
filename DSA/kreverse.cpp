// array size
// elemnt
/*
5
1 2 3 4 5

k >= 0;

k = 2

1 2 3 4 5
5 1 2 3 4
4 5 1 2 3

k = 5
5 1 2 3 4
4 5 1 2 3
3 4 5 1 2
2 3 4 5 1
1 2 3 4 5

reverse n array ka code
*/
#include<iostream>
using namespace std;
int reverse(int arr[], int startIndex, int endIndex,int k){
    while(startIndex < endIndex){
        swap(arr[startIndex],arr[endIndex]);
        startIndex++,endIndex--;

}
}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    reverse(arr,startIndex,endIndex,k)

}