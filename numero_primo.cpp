// No encontre el programa que te dije. Asi que lo resolví de nuevo y di con esta nueva forma más corta.


# include <iostream>
# include <math.h>

using namespace std;

bool es_primo(unsigned int);

int main() {
  // con este for probamos del 0 al 20
  int suma = 0;
  for ( int i = 1; i < 250; i++) {
    // solo mostramos los primos
    if (!es_primo(i)) {
      cout << i << endl;
      suma += i;
    }
  }

  cout << "La suma es: " << suma << endl;

  return 0;
}

bool es_primo(unsigned int numero) {
  unsigned int divisor = 2;
  unsigned int limite_superior = ceil(sqrt(numero + 1));

  while (divisor < limite_superior && numero % divisor != 0) {
    divisor ++;
  }

  return divisor == limite_superior && numero != 1;
}
