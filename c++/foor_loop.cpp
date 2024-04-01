#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number for its table"<<endl;
    cin>>n;

    for(int i=n;i<=n*10;i+=n){
        cout<<i<<" ";
    }
    return 0;
}