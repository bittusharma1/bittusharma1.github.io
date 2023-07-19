// // /*********reference variable & global variable & general variable**********/

// // #include <iostream>
// // using namespace std;

// // int x=34;

// // int main()
// // {
// //    int a=69; 
// //    int & b=a;
// //    int c=x;

// //    cout<<a<<endl;
// //    cout<<b<<endl;
// //    cout<<c<<endl;
// //     return 0;

// // }

// /**********Constants , Manipulators and Operator Precedence***********/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a=3, b=78, c=1278;
//   cout<<"The value of a without setw is: "<<a<<endl;
//   cout<<"The value of a without setw is: "<<a<<endl;
//   cout<<"The value of a without setw is: "<<a<<endl;

//   cout<<"The value of a  is: "<<setw(4)<<a<<endl;
//   cout<<"The value of a  is: "<<a<<endl;
//   cout<<"The value of a  is: "<<a<<endl;

//     return 0;
// }


/**********rectange with numbers using setw**********/
#include <bits/stdc++.h>
using namespace std;

int main(){
   
    
    int a = 2;
    int b = 2;
    int c = 2;
    int d = 2;
    int e = 2;
    int f = 2;
    int g = 2;
    int h = 2;
    int i = 2;
    int j = 2;
    int k = 2;
    int l = 2;
    
    cout<<setw(2)<<a;
    cout<<setw(2)<<b;
    cout<<setw(2)<<c;
    cout<<setw(2)<<d;
    cout<<setw(2)<<e<<endl;
    cout<<setw(2)<<f;
    cout<<setw(8)<<g<<endl;
    cout<<setw(2)<<h;
    cout<<setw(2)<<i;
    cout<<setw(2)<<j;
    cout<<setw(2)<<k;
    cout<<setw(2)<<l;    

    return 0;
}