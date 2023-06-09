# include <iostream>

using namespace std;

int factorial(int);

int main() {

  int limite_superior, resultado = 1;
  cout << "\n\tFactorial de: ";
  cin >> limite_superior;
  
  resultado = factorial(limite_superior);

  cout << "\n\t Factorial: " << resultado << endl;

  return 0;
}

int factorial(int limite_s) {
  if (limite_s == 1) {
    return 1;
  } else {
    return limite_s * factorial(limite_s - 1);
  }
}


  
