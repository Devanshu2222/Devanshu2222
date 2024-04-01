// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n :"<<endl;
//     cin>>n;

//     if(n>=0)
//     {
//         cout<<n<<endl;
//     }
//     else if(n<0)
//     {
//         cout<<-n<<endl;
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int cp;
//     int sp;
//     cout<<"Enter the cost price:"<<endl;
//     cin>>cp;
//     cout<<"Enter the selling price:"<<endl;
//     cin>>sp;
//     if(sp>cp)
//     {
//         float profit=sp-cp;
//         cout<<"seller made a profit"<<endl;
//         cout<<"the profit he made is"<<profit<<endl;
//     }
//     else
//     {
//         float loss=(sp-cp);
//         cout<<"sorry,seller lost his money"<<endl;
//         cout<<"he lost "<<-loss <<endl;

//     }
//     return 0;
    
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     // A while loop to check the conditions
//     while (n <= 9)
//     {
//         // Check if n is between 1 and 9 (inclusive)
//         if (n == 1)
//         {
//             cout << "one";
//             break;
//         }
//         else if (n == 2)
//         {
//             cout << "two";
//             break;
//         }
//         else if (n == 3)
//         {
//             cout << "three";
//             break;
//         }
//         else if (n == 4)
//         {
//             cout << "four";
//             break;
//         }
//         else if (n == 5)
//         {
//             cout << "five";
//             break;
//         }
//         else if (n == 6)
//         {
//             cout << "six";
//             break;
//         }
//         else if (n == 7)
//         {
//             cout << "seven";
//             break;
//         }
//         else if (n == 8)
//         {
//             cout << "eight";
//             break;
//         }
//         else if (n == 9)
//         {
//             cout << "nine";
//             break;
//         }
//         // If n is greater than 9, print a message and break the loop
//     }
//     do while (n>9)
//     {
//         /* code */
//         cout<<"Greater than 9.";
//     }
    

   
// }
    #include<iostream>
    using namespace std;
    void printNum(int n)
    {
        if (n <= 9) 
        {
            switch (n) {
                case 1:
                cout << "one\n";
                    break;
                case 2:
                    cout << "two\n";
                    break;
                case 3:
                    cout << "three\n";
                    break;
                case 4:
                    cout << "four\n";
                    break;
                case 5:
                    cout << "five\n";
                    break;
                case 6:
                    cout << "six\n";
                    break;
                case 7:
                    cout << "seven\n";
                    break;
                case 8:
                    cout << "eight\n";
                    break;
                case 9:
                    cout << "nine\n";
                    break;
            }
        } 
        else
        {
            cout << "Greater than 9.\n";
        }
    }
    int main()
        {
            int n;
            cin>> n;
            printNum(n);
        }
