#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    
    int ans = 0;
    while(n > 0)
    {
        int last_digit = n % 10;
        ans = ans + last_digit;
        n = n / 10;
    }
    
    cout << "Sum of the digits of the number is: " << ans << endl;
    
  return 0;
}