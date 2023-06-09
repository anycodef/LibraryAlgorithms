# include <iostream>

using namespace std;

int main() {

  int limite_superior, factorial = 1;
  cout << "\n\tFactorial de: ";
  cin >> limite_superior;

  for( int i = 1; i <= limite_superior; i++) {
    factorial *= i;
  }  

  cout << "\n\t Factorial: " << factorial << endl;

  return 0;
}
