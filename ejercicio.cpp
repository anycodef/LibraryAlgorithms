# include <iostream>
using namespace std;

int main() {

  char grado;
  int primaria = 0, secundaria = 0, tecnico = 0, universitaria = 0, total;

  cout << "\n\tIngrese el total de personas: ";
  cin >> total;

  cout << "\n\ta = primaria" << endl;
  cout << "\n\tb = secundaria" << endl;
  cout << "\n\tc = tecnico" << endl;
  cout << "\n\td = universitaria" << endl;

  for ( int i = 1; i <= total; i++ ) {
    cout << "\n\t Grado: ";
    cin >> grado;

    if (grado == 'a') {
      primaria++;
    } else {
      if (grado == 'b') {
        secundaria++;
      } else {
        if (grado == 'c') {
          tecnico++;
        } else {
          if (grado == 'd') {
            universitaria++;
          }
        }
      }
    }
  }

  cout << "\n\tPORCENTAJE\n" << endl;
  cout << "\t\tPrimaria: " << float(primaria) / float(total) * 100 << "%" << endl;
  cout << "\t\tSecundaria: " << float(secundaria) / float(total) * 100 << "%" << endl;
  cout << "\t\tTecnico: " << float(tecnico) / float(total) * 100 << "%" << endl;
  cout << "\t\tUniversitaria: " << float(universitaria) / float(total) * 100 << "%" << endl;

  return 0;
}
