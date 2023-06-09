# include <iostream>
# include <iomanip>

using namespace std;

int main() {
  
  double pi = 0.00000000; 
  double signo = 1.000000;
  double divisor = 1.000000;

  for (int i = 0; i < 1000; i++) {
    pi += signo * (4/divisor);
    signo *= -1;
    divisor += 2;
  }
  cout << setprecision(11);
  cout << "El numero pi es: " << pi << endl;

  return 0;
}
