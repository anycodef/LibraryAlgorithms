# include <iostream>
using namespace std;

int main() {

  // Declaración de variables y matrices a usar.
  int N[50][50], Par[2500], Impar[2500], Primo[2500], Perf[2500], n, c_par=0, c_impar=0, c_perf=0, c_primos=0;
  
  // Ingreso de las dimensiones de mi matriz cuadrada.
  cout << "\n\tDigite el tamaño del matriz: ";
  cin>>n;
  cout << endl;

  // Ingreso de datos a la matriz.
  cout << "\n\tIngreso de datos en la matriz: " << endl;
  // Se recorre todos los indices de la matriz con un doble for.
  for (int i=0; i<n; i++) {
    for (int j= 0; j<n; j++) {
      cout << "\t\tN["<<i<<"]["<<j<<"]: ";
      cin >> N[i][j];
    }
  }
  
  // Se recorre todos los elementos de la matriz para computar los valores solicitados.
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {

      // Se verifica si el valor numerico almacenado en N[i][j] es par.
      if (N[i][j] % 2 == 0) {
        Par[c_par]=N[i][j];
        c_par ++;
      // caso contrario se verifica si es impar y se almacena en el vector correspodiente.
      } else if (N[i][j] % 2 != 0) {
        Impar[c_impar] = N[i][j];
        c_impar ++;
      }

      // Ademas debemos verificar si el valor es perfecto o no y se almacena en el vector de numero perfectos
      // si es el caso.
      // Ademas verificamos si es primo.
      int div=0, suma_prop=0;
      for (int k=1; k<=N[i][j]; k++) {
        if (N[i][j] % k == 0) {
          div ++;
          if (k != N[i][j]) {
            suma_prop += k;
          }
        }
      }
      if (div == 2) {
        Primo[c_primos] = N[i][j];
        c_primos++;
      }
      if (suma_prop == N[i][j]) {
        Perf[c_perf] = N[i][j];
        c_perf++;
      }
    }
  }

  // se muestran los datos.
  cout << "\n\tEl vector impar es: " << endl;
  cout << "\t  -->  ";
  for (int i=0; i<c_impar; i++) {
    cout << Impar[i] << "\t";
  }
  cout << endl;

  cout << "\n\tEl vector de primos es: " << endl;
  cout << "\t  -->  ";
  for (int i=0; i<c_primos; i++) {
    cout << Primo[i] << "\t";
  }
  cout << endl;

  cout << "\n\tEl vector de par es: " << endl;
  cout << "\t  -->  ";
  for (int i=0; i<c_par; i++) {
    cout << Par[i] << "\t";
  }
  cout << endl;
  
  cout << "\n\tEl vector de perfectos es: " << endl;
  cout << "\t  -->  ";
  for (int i=0; i<c_perf; i++) {
    cout << Perf[i] << "\t";
  }
  cout << endl;

  return 0;
}
