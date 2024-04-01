// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     cout<<&x<<endl;
   
// //pointer * implementation 
// float y=12.23;
//   int*ptr=&x;
//   cout<<ptr<<endl;
//   float*ptrf=&y;
//   cout<<ptrf<<endl;
//   // changing the value in a variable using ptr and by simply
//   x=12;
//   cout<<"the value at the x  will be now "<<*ptr<<endl;
//   *ptr = 43;
//   cout<<"now the vqalue of x will be updated to "<<*ptr<<endl;

//    return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x>>y;
    int *ptrx=&x;
    int *ptry=&y;
    int result;
    int *ptr_result=&result;
    *ptr_result=*ptrx+*ptry;
    cout<<"the result will be "<<result;
    return 0;
}