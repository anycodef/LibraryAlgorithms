# include <iostream>
using namespace std;

void otro(int, int&, int);

int main() {

  int a = 1, b = 2, c = 3;
  otro(a, b, c);
  cout << "main dice: ";
  cout << " a = " << a << " b = " << b << " c = " << c << endl;
  otro(b, a , c);
  cout << "main dice: ";
  cout << " a = " << a << " b = " << b << " c = " << c << endl;
  return 0;
}

void otro (int a, int &b, int c) {
  
  c = a + b;
  b = a; 
  a = c;
  cout << "otro dice: ";
  cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

