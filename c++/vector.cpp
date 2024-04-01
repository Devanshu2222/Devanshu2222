// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
    
//     v.push_back(2);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

//     v.push_back(4);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;



//     v.resize(5);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

//     v.resize(20);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//     v.pop_back();
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//     return 0;
// }



// ============================looping in vectors ===================================


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector <int> v;
//     cout<<"Enter the elements of the vector: ";
//     for(int i=0;i<5;i++)
//     {
//         int element;
        
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i =0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"After adding new element in the vector :"<<endl;
//     v.insert(v.begin()+3,6);
//     for(int i =0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"After deleting the element from the vector: "<<endl;
//     v.erase(v.begin() +2 );
//     for(int i =0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }




// ==================================last occurance ofan element in vector =================================

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(6);
//     for(int i=0;i<6;i++)
//     {
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the value  to find last occurrence of :";
//     cin>>x;

//     int occurance=-1;
//     for(int i =0;i<v.size();i++)
//     {
//         if(v[i]==x)
//         {
//             occurance=i;
//         }
//     }
//     cout<<"The last occurrence of "<<x<<" is at index : "<<occurance<<endl;

//     return 0;
// }


// ================count the occurances of the element in the vector==========================
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(6);
//     for(int i =0;i<v.size();i++)
//     {
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the element you want to find the occurance of :"<<endl;
//     cin>>x;

//     int occurace = 0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==x)
//         {
//             occurace++;
//         }
//     }
//      cout<<occurace;
//     return 0;
// }



// =======================stricktly greater element in the vector ================================

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(6);
//     for(int i=0;i<v.size();i++)
//     {
//         cin>>v[i];
//     }
//     int x;
//     cout<<"enter the number you want to find the strickly greater element of: "<<endl;
//     cin>>x;
//     int count=0;
//     for(int i =0;i<v.size();i++)
//     {
//         if(v[i]>x)
//         {
//             count++;
//         }
//     }
//     cout<<count<<" ";
//     return 0;
// }


// ===================check the vector is sorted or not=============


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v(6);
//     cout << "Enter the elements of array" << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }
//     int sortedflag = true;
//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i] < v[i - 1])
//         {
//             sortedflag = false;
//             break;
//         }
//     }
//     cout << sortedflag << " ";
//     return 0;
// }


// ============================diffrence in sum of even indexes and sum of odd indexs======================


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(6);
//     cout<<"Enter the elements of the vector: "<<endl;
//     for(int i=0;i<v.size();i++)
//     {
//         cin>>v[i];
//     }
//     int sum_even=0;
//     int sum_odd=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]%2==0)
//         {
//             sum_even+=v[i];
//         }
//         if(v[i]%2!=0)
//         {
//             sum_odd+=v[i];
//         }
//     }
//     cout<<"the sum of elements at even index is: "<<sum_even<<endl;
//     cout<<"the sum of elements at odd index is: "<<sum_odd<<endl;
//     int diff=sum_even-sum_odd;
//     cout<<"\nThe difference between the sum of elements at even indexes and the sum of elements at odd indexes is : "<<diff<<" ";
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>::iterator v = v.begin()
    v++;
    cout<< *(v)
    return 0;

}
