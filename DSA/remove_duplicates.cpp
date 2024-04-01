#include<iostream>
#include<vector>
using namespace std;

int remove_duplicates(vector<int>&a, int n) 
{
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            a.erase(j);
        }
    }
   }
}
int main()
{

    return 0;
}