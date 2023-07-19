# include <iostream>
# include <windows.h>
# include <conio.h>
using namespace std;

int main() {

// definicón de variables
int dia, mes, ano; // entrada
string nombre_mes; // salida

// INICIO

// entrada
system("cls"); // limpiar la consola
cout << "\n\t\t.: Convertir fecha numerica a enunciado :." << endl;

cout << "\n\tIngrese el consumo la fecha: "<< endl;
cout << "\tDIA: ";
cin >> dia;

do {
cout << "\tMES: ";
cin >> mes;
if (mes < 1 || mes > 12) {
cout << "\n\t Por favor ingrese un valor v" << char(160) << "lido.\n" << endl;
Sleep(2000);
}
} while ( mes < 1 || mes > 12 );

do {
cout << "\tAno: ";
cin >> ano;

if (ano < 1900 || ano > 2500) {

cout << "\n\t Por favor ingrese un valor v" << char(160) << "lido.\n" << endl;
Sleep(2000);
}
} while (ano < 1900 || ano > 2500); // con esto comprobamos que la fecha del año esta en el rango permitido

// proceso

switch (mes) {
case 1: nombre_mes = "Enero";
break;

case 2: nombre_mes = "Febrero";

break;
case 3: nombre_mes = "Marzo";
break;
case 4: nombre_mes = "Abril";
break;
case 5: nombre_mes = "Mayo";
break;
case 6: nombre_mes = "Junio";
break;
case 7: nombre_mes = "Julio";
break;
case 8: nombre_mes = "Agosto";

break;

case 9: nombre_mes = "Septiembre";

break;

case 10: nombre_mes = "Octubre";

break;

case 11: nombre_mes = "Nomviembre";

break;

case 12: nombre_mes = "Diciembre";

break;

}

// salida
cout << "\n\tRESULTADO" << endl;
cout << "\n\t Es el " << dia << " de " << nombre_mes << " del " << ano << "." << endl;

// esperar para salir con cualquier boton
getch();

return 0;
}
