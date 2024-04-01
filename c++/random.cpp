#include<iostream>
using namespace std;
int main()
{
    int x=60;
    int y=90;
    int modulus=y%x;
    cout<<modulus;
    if(y%x==0)
        cout<<"good"<<endl;
    else 
        cout<<"bad"<<endl;
    
    return 0;
}