#include <iostream>
using namespace std;

int sum(int x,int y)
{
    int add=x+y;
    return add;
}
int difference(int x,int y)
{
    int subtract=x-y;
    return subtract;
}
int product(int x,int y)
{
    int multiply=x*y;
    return multiply;
}
int division(int x,int y)
{
    int divide=x/y;
    return divide;
}
int main()
{
    int x,y; 
    cin>>x>>y;
  cout<<"sum = "<<sum(x,y)<<endl;
    cout<<"difference = "<<difference(x,y)<<endl;
    cout<<"product = "<<product(x,y)<<endl;
    cout<<"division = "<<division(x,y)<<endl;

  return 0;
}