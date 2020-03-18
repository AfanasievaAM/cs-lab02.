#include <iostream>

using namespace std;

int main()
{
  cout << "Enter A and B: ";
  int a, b, max,min;
  cin >> a >> b;
  cout << "A + B = " << a + b << '\n';
  cout << "A - B = " << a - b << '\n';
  cout << "A * B = " << a * b << '\n';
  cout << "A / B = " << a / b << '\n';
  max=0;
  min=0;
  if (a>b)
max=a;
if (b<a)
    min=b;
     cout << min<<'\n';
  cout<< max;
    return 0;
}

