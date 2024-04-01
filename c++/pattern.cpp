// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }  


// ==================================hollow rectangle===================================
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             if(i==1 || j==1 ||i==n || j==m)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ==============================trinangular pattern=====================================
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=(n-i+1);j++)
//         {
//            cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ========================compelx pattren================
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for(int i =0;i<n;i++)
    {
        for(int j=1;j<=2*i+1;j++)
        {
           if((i==0||i==n-1)&&j%2!=0)
               cout<<"*";
           else if(i!=(n-1)/2 && j%2==0)
                cout<<" ";
           else
               cout<<"*";
        }
        cout<<"\n"; 
    }
}