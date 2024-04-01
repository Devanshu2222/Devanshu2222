// #include<iostream>
// using namespace std;
// int add(int num1, int num2) 
// {
//     int sum=num1+num2;
//     return sum;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter the val;ue of a and b:"<<endl;
//     cin>>a>>b;
//     int c,d;
//     cout<<"Enter the value of c and d:"<<endl;
//     cin>>c>>d;
//     if (add(a,b)>add(c,d))
//         cout << "The sum is greater for first pair";
//     else if (add(a,b)==add(c,d))
//         cout << "Both pairs have equal sums";
//     else
//         cout << "The sum is greater for second pair";
//     return 0;
// }
// ===================================some more questiuons on functions============================================
// #include<iostream>
// #include<math.h>
// using namespace std;
// int square(int n)
// {
//     int result =n*n;
//     return result;
// }
// int main()
// {
//     int n;
//     cout<<"enther the natural numbers you want:"<<" ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<square(i)<<" ";
//     }
// return 0;
// }


// ================area and circumfarence of the circle ===================================
// #include<iostream>
// using namespace std;
// double Area_of_circle(int r)
// {
//     double area=3.14*(r*r);
//     return area;
// }
// double circumfarance_of_circle(int r)
// {
//     double circumfarance=2*3.14*r;
//     return circumfarance;
// }
// int main()
// {
//     int radius;
//     cout<<"enter the value of radius:"<<" ";
//     cin>>radius;
//     cout<<Area_of_circle(radius)<<endl;
//     cout<<circumfarance_of_circle(radius)<<endl;
//     return 0;
// }


// ======================finding out the prime number==========================

#include<iostream>
using namespace std;
bool prime_number(int num)
{
    for(int i=2;i<= num / 2;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   int a=1,b=40;
    for(int i = a;i<=b;i++)
    {
        if(prime_number(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}