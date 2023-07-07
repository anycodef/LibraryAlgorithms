// Nombre: Sota Rios, Pedro Josue

# include <iostream>
using namespace std;
# define ALUMNOS 10

void leer_notas ( float [ALUMNOS] );
float media ( float [ALUMNOS] );
void sup_inf_media ( float [ALUMNOS], float, int&, int& );
int main ( void );

void leer_notas ( float notas [ALUMNOS] ) {

  cout << "\n\tIngrese la nota de los " << ALUMNOS << endl << endl;
  
  for ( int i = 1; i <= ALUMNOS; i++ ) {
    cout << "\tNota Alumno " << i << ": ";
    cin >> notas[i - 1];

    if ( notas[i - 1] < 0 || notas[i - 1] > 20 ) {
      i--;
      cout << "\n\tValor incorrecto. Ingrese nuevamente la nota." << endl;
    }
  }

  cout << "\n\t Registro de notas completo.\n" << endl;
}

float media ( float notas [ALUMNOS] ) {
  float mediaNotas;
  float sumaNotas = 0;
  
  for ( int i = 0; i < ALUMNOS; i++ ) {
    sumaNotas += notas[i];
  }

  mediaNotas = sumaNotas / ALUMNOS;
  
  return mediaNotas;
}

void sup_inf_media ( float notas [ALUMNOS], float med, int& sup_med, int& inf_med ) {
  sup_med = 0;
  inf_med = 0;

  for ( int i = 0; i < ALUMNOS; i++ ) {
    if ( notas[i] > med ) {
      sup_med ++;
    } else {
      if ( notas[i] < med ) {
        inf_med ++;
      }
    }
  }
}

int main ( void ) {
  float notas[ALUMNOS], med;
  int sup_med, inf_med;

  leer_notas( notas );
  med = media ( notas );
  sup_inf_media( notas, med, sup_med, inf_med );

  cout << "La media es " << med << " y hay " << sup_med;
  cout << " alumnos con nota Superior a la media y " << inf_med;
  cout << " alumnos con nota inferior" << endl;

  system("pause");
  return 0;
}

