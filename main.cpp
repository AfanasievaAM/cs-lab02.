#include <iostream>

using namespace std;

int main()
{
  cout << "Enter A and B: ";
  int a, b, max;
  cin >> a >> b;
  cout << "A + B = " << a + b << '\n';
  cout << "A - B = " << a - b << '\n';
  cout << "A * B = " << a * b << '\n';
  cout << "A / B = " << a / b << '\n';
  max=0;
  if (a>b)
      max=a;
      else
      max=b;
  cout << max;
    return 0;
}
