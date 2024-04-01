#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int k;
    cout<<"Enter how many time you want to reverse the array:"<<endl;
    cin>>k;
    k=k%v.size();
    reverse(v.begin( ),v.end());  //Reve rsing whole array
    if (k > 0)                   //If number of times is greater than zero then reverse first part and last part separately
    reverse(v.rbegin(),v.rend());//Reverse from last element till first
    cout<<"The reversed array is: "<<endl;
    for(int i = 0 ; i < v.size()-k ; ++i)  
    {
        cout << v[i] << ' ';        
    }                                                   
    cout << endl;
    for (auto it = v.rbegin() ; it != v.rbegin() + k ; ++it)  
    {
        cout << *it << ' ';          
    }        
    return 0;
}
