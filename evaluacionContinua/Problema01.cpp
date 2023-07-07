// Nombre: Sota Rios, Pedro Josue

# include <iostream>
# include <math.h>

using namespace std;

// prototipo de funciones y procedimientos
void ingresarValores(int&, int&);
int fibonacci(int);
bool verificarSiEsFibonacci(int);
void contarCuantosFibonacci(int [], int, int&);
bool esPrimo(int);
void llenarArregloConPrimos(int [], int);

// función principal
int main() {

  int n, m; // variables de entrada
  int numerosFibonacciPrimos; // variables de salida
  ingresarValores(n, m); // entrada y consistencia de datos
  int Arreglo[n]; // intermedio

  // proceso
  llenarArregloConPrimos(Arreglo, m);
  contarCuantosFibonacci(Arreglo, m, numerosFibonacciPrimos);

  // salida
  cout << "\n\tLa cantidad de numeros fibonacci y primos son: " << numerosFibonacciPrimos << endl;

  return 0;
}

// construccion de funciones
void ingresarValores(int& n, int&m) {
  cout << "\n\tIngrese la dimension del arreglo: ";
  cin >> n;

  do {
    cout << "\n\t Ingrese la cantidad de primos que desea ingresar en el arreglo: ";
    cin >> m;
  } while (m > n);
}

void llenarArregloConPrimos(int A[], int cantidadPrimos) {
  int indice = 0;
  int numero = 2; // iniciamos con el primer primo

  while (cantidadPrimos != indice) {
    if (esPrimo(numero)) {
      A[indice] = numero;
      indice ++;
    }
    numero ++;
  }
}

void contarCuantosFibonacci(int A[], int nPrimerosPrimos, int& cantidadFibonacciPrimos) {
  cantidadFibonacciPrimos = 0;

  for (int i = 0; i < nPrimerosPrimos; i++) {
    if (verificarSiEsFibonacci(A[i])) {
      cantidadFibonacciPrimos ++;
    }
  }
}

bool verificarSiEsFibonacci(int numero) {
  
  int numeroFibonacci = 1;
  int posicionFibonacci = 1;

  while (numeroFibonacci < numero) {
    numeroFibonacci = fibonacci(posicionFibonacci);
    posicionFibonacci ++;
  }

  return numeroFibonacci == numero;
}

int fibonacci(int posicionFibo) {
  int numeroFibo = 0;
  if (posicionFibo == 1 || posicionFibo == 2) {
    numeroFibo = 1;
  } else {
    numeroFibo += fibonacci(posicionFibo - 1) + fibonacci(posicionFibo - 2);
  }

  return numeroFibo;
}

bool esPrimo(int numero) {
  int divisores = 2;

  while (numero % divisores != 0 && ceil(sqrt(numero + 1)) > divisores) {
    divisores ++;
  }

  return ceil(sqrt(numero + 1)) == divisores && numero != 1;
}

