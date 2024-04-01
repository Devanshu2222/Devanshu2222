// #include<vector>
// #include<iostream>
// using namespace std;

// void sortZero(vector<int> &v){
//     int count = 0;

//     for(int i = 0; i < v.size(); i++){
//         if(v[i] == 0) count++;
//     }

//     for(int i = 0; i < v.size(); i++){ 
//         if(count > 0){
//             count--;
//             v[i] = 0;
//         }
//         else v[i] = 1;
//     }
//     return;
// }

// int main(){
//     vector<int> v;
//     int size;

//     cin >> size;

//     int element;

//     for(int i = 0; i < size; i++){
//         cin >> element;
//         v.push_back(element);
//     }

//     sortZero(v);

//     for(int ele : v){
//         cout << ele << " ";
//     }
//     return 0;
// }



// solving the sort question using two pointers
// #include<iostream>
// #include<vector>
// using namespace std;

// void sortZerosOnes(vector<int> &v)
// {
//     int left=0;
//     int right=v.size()-1;
//     while(left<right)
//     {
//         if(v[left]==1 && v[right]==0)
//         {
//             v[left++]=0;
//             v[right--]=1;
//         }
    
//         if(v[left]==0)
//         {
//             left++;
//         }
//         if(v[right]==1)
//         {
//             right--;
//         }
//     }
//     return;

// }
// int main()
// {
//     vector<int> v;
//     int size;
//     cin>>size;
//     int ele ;
   
//     for(int i=0;i<size;i++)
//     {
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sortZerosOnes(v);

//     cout<<"The sorted array is: "; 

//   	for (int i = 0; i < v.size(); i++)  cout << v[i] << " ";  

//     return 0;
// }


// =================even at first and odd at back ================================
// #include<iostream>
// #include<vector>
// using namespace std;
// int sort_even_odd(vector<int> &v)
// {
//     int left=0;
//     int right=v.size()-1;
//     while(left<right)
//     {
//         if(v[left] % 2 != 0 && v[right] % 2 == 0)
//         {
//             swap(v[left], v[right]);
//             left++;
//             right--;
//         }
//         else if(v[left]%2==0)  left++;
//         else right--;
//     }
//     return 0;
// }
// int main()
// {
//     vector<int> v;
//     int size;
//     cout<<"Enter the size of vector:"<<endl;
//     cin>>size;
//     int ele;
//     cout<<"Enter the elements :"<<endl;
//     for(int i =0;i<size;i++)
//     {
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sort_even_odd(v);
//     cout<<"The sorted array will be:"<<" ";

//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i] << " ";
//     }
   

//     return 0;
// }


// ==================== square of given array element is srted ==============================
#include<iostream>
#include<vector>
using namespace std;
int sort_square_array(vector<int> &v)
{
    vector<int> ans;
    int left_ptr=0;
    int rigth_ptr=v[i]-1;
    

}
int main()
{

    return 0;
}