
#include <iostream>
#include <string>
using namespace std;

int main() {
int a = 4;
int &b = a;
b = b + 2;
cout << a << " " << b << endl;
 return 0;
}