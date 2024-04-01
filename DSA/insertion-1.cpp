#include<iostream>
using namespace std;
void display(int arr[], int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
    
}
}
int insert(int arr[], int capacity,int size, int index , int element)  //Function to add an element in the array.
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i =0;i>=index;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[100]={12,13,14,16};
    int capacity=100;
    int size=4;
    int element=15;
    int index=3;
    display(arr,size);
    insert(arr,capacity,size,element,index);
    size+=1;
    return 0;

}