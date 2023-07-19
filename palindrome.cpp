#include <iostream>
using namespace std;

int main()
{
  int n , ans=0;
  cout<<"Enter the value of n : ";
  cin>>n;
int t=n;
 while(n>0)
 {
     int last_digit = n % 10;
     ans = (ans * 10) + last_digit;
     n = n / 10;
 }
    cout<<"Reversed number is :"<<ans<<endl;

    if(t==ans)
    {
        cout<<"Given number is palindrome."<< endl;
    }
    else
    {
        cout<<"Given number is not palindrome."<< endl;
    }

   return 0;
}