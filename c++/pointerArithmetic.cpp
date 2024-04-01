// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int *ptr=&x;
//     cout<<ptr<<" "<<(ptr+1);
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,23,2};
    int *ptr=&arr[0];
     cout<<*++ptr<<endl;
    cout<<*ptr++<<endl;
    return 0;

}