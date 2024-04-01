//call by refrence in pointers
//pointers arithmetics
// pointers and arrays 

// ---------------------------------------------------------------------------------------------
// we will be swaping the values by using pointers;
#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=10;int y=20;
    int *p1=&x;
    int *p2=&y;
    swap(p1,p2);
    cout<<"the new value of x will be "<<x<<" "<<"the new value of y will be "<<y;
    return 0;
}

