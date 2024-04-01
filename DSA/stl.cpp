#include<iostream>
using namespace std;
void printing_pairs()
{
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int,pair<int,int>> pi={1,{3,4}};
    cout<<pi.first<<" "<<pi.second.first<<" "<<pi.second.second<<endl;
}

void pairs_array()
{
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].first<<" "<< arr[1].second<<endl;
}
    

int main()
{
    printing_pairs();
    pairs_array();
    return 0;
}