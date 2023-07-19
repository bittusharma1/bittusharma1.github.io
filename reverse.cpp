#include <iostream>
using namespace std;

int main()
{
  int n , ans=0;
  cout<<"Enter the value of n : ";
  cin>>n;
 /*This will print the reserve of a number*/

 while(n>0)
 {
     int last_digit = n % 10;
     ans = (ans * 10) + last_digit;
     n = n / 10;
 }
cout<<"Reversed number = "<<ans<<endl;

   return 0;
}