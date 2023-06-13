# include <iostream>
using namespace std;

int main() {

  char grado;
  int primaria = 0, secundaria = 0, tecnico = 0, universitaria = 0, total;

  cout << "\n\tIngrese el total de personas: ";
  cin >> total;

  for ( int i = 1; i <= total; i++ ) {

    system("clear"); // en windows es system("cls");

    cout << "\n\t Personas entrevistadas: " << primaria + secundaria + tecnico + universitaria << endl;

    cout << "\n\ta = primaria\t(" << primaria << ")" << endl;
    cout << "\n\tb = secundaria\t(" << secundaria << ")" << endl;
    cout << "\n\tc = tecnico\t(" << tecnico << ")" << endl;
    cout << "\n\td = universitaria\t(" << universitaria << ")" << endl;


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
          } else {
            i--;
          }
        }
      }
    }
  }

  system("clear");
  cout << "\n\t Personas entrevistadas: " << primaria + secundaria + tecnico + universitaria << endl;

  cout << "\n\ta = primaria\t(" << primaria << ")" << endl;
  cout << "\n\tb = secundaria\t(" << secundaria << ")" << endl;
  cout << "\n\tc = tecnico\t(" << tecnico << ")" << endl;
  cout << "\n\td = universitaria\t(" << universitaria << ")" << endl;


  cout << "\n\tPORCENTAJE\n" << endl;
  cout << "\t\tPrimaria: " << float(primaria) / float(total) * 100 << "%" << endl;
  cout << "\t\tSecundaria: " << float(secundaria) / float(total) * 100 << "%" << endl;
  cout << "\t\tTecnico: " << float(tecnico) / float(total) * 100 << "%" << endl;
  cout << "\t\tUniversitaria: " << float(universitaria) / float(total) * 100 << "%" << endl;

  return 0;
}
