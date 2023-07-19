# include <iostream>
# include <windows.h>
# include <conio.h>
using namespace std;

int main() {

// definición de constantes
float primeros_100 = 0.15;
float de_100_a_500 = 0.2;
float de_500_a_1000 = 0.35;
float mas_de_1000 = 0.8;

// definicón de variables
float consumo_total_volumen; // entrada
float cobro_total_por_consumo; // salida

// INICIO

// inicialización de variables
cobro_total_por_consumo = 0;

do {
system("cls"); // limpiar la consola
cout << "\n\t\t.: SISTEMA DE COBRO DE AGUA CON PENALIZACI" << char(224) << "N :." << endl;

// entrada
cout << "\n\tIngrese el consumo total de agua en metros c" << char(163) << "bicos." << endl;

cout << "\n\t VOLUMEN: ";
cin >> consumo_total_volumen;

if (consumo_total_volumen < 0) {
cout << "\n\t Por favor ingrese un valor v" << char(160) << "lido." << endl;
Sleep(2000);
}
} while (consumo_total_volumen < 0); // con esto comprobamos que el consumo sea siempre positivo

// proceso
if (consumo_total_volumen > 1000) {
cobro_total_por_consumo += (consumo_total_volumen - 1000) * mas_de_1000;
consumo_total_volumen = 1000;
}

if (consumo_total_volumen > 500) {
cobro_total_por_consumo += (consumo_total_volumen - 500) * de_500_a_1000;
consumo_total_volumen = 500;
}

if (consumo_total_volumen > 100) {
cobro_total_por_consumo += (consumo_total_volumen - 100) * de_100_a_500;
consumo_total_volumen = 100;

}

cobro_total_por_consumo += consumo_total_volumen * primeros_100;
consumo_total_volumen = 0;

// salida
cout << "\n\tRESULTADO" << endl;
cout << "\tEl cobro total de agua es: " << cobro_total_por_consumo << endl;

// esperar para salir con cualquier boton
getch();

return 0;
}
