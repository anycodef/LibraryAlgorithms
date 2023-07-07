// Nombre: Sota Rios, Pedro Josue

# include <iostream>
# include <time.h>

using namespace std;

// prototipo de funciones y procedimientos
void ingresarDimensionesMatriz ( int&, int& );
float obtenerValoresRealesAleatorios ();
void llenarMatriz ( float**, int, int );
void mostrarMatriz ( float**, int, int );

// función principal
int main() {

  // semilla
  srand(time(NULL));

  // entrada y declaraciones de variables y matriz
  int columnas, filas; // declaracion de variables
  ingresarDimensionesMatriz( filas, columnas ); // ingreso de dimensiones

  float** matriz = new float*[filas];
  
  // proceso
  llenarMatriz( matriz, filas, columnas );

  // salida
  mostrarMatriz ( matriz, filas, columnas );

  return 0;
}

// construcción de funciones
void ingresarDimensionesMatriz ( int& filas, int& columnas ) {
  cout << "\n\t Ingrese las dimensiones de la matriz: " << endl << endl;
  cout << "\n\t Filas: ";
  cin >> filas;

  do {
    cout << "\n\tColumnas: ";
    cin >> columnas;
    if (columnas <= filas) {
      cout << "\t\tVuelva a ingresar el valor de las columnas. Debe ser mayor que el de las filas. " << endl;
    }
  } while (filas >= columnas);
}

void llenarMatriz ( float** matriz, int filas, int columnas ) {
  float sumaFila;

  for ( int i = 0; i < filas; i++ ) {
    sumaFila = 0;
    matriz[i] = new float[columnas];
    for ( int j = 0; j < columnas; j++ ) {
      if ( j < columnas - 1 ) {
        matriz[i][j] = obtenerValoresRealesAleatorios();
        sumaFila += matriz[i][j];
      } else {
        matriz[i][j] = sumaFila;
      }
    }
  }
}

void mostrarMatriz ( float** matriz, int filas, int columnas ) {
  cout << "\n\t\tMATRIZ\n" << endl;

  cout << "\t";
  for ( int i = 0; i < columnas; i++ ) {
    if ( i == columnas - 1 ) {
      cout << "\t\tSuma" << endl;
    } else {
      cout << "\t" << i;
    }
  }

  for ( int i = 0; i < filas; i++ ) {
    cout << "\t" << i;
    for ( int j = 0; j < columnas; j++ ) {
      if ( j == columnas - 1 ) {
        cout << "\t --> " << matriz[i][j] << endl;
      } else {
        cout << "\t" << matriz[i][j];
      }
    }
  }
}

float obtenerValoresRealesAleatorios() {
  float valor;
  int limite_superior = 100;
  int limite_inferior = 1;

  valor = rand() % ( limite_superior - limite_inferior + 1 ) + limite_inferior;

  return valor;
}


