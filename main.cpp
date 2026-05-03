#include "aleatorio.h"
#include <iostream>
#include <cstdlib>   // para srand() y rand()
#include <ctime>     // para time()

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 15;
// Balance realista de vehiculos en relacion al numero de celdas del grid para evitar congestion
const int MAX_VEHICULOS = 20;

int main() {
    
    srand(time(0));
    int grid[FILAS][COLUMNAS] = {0};
    Vehiculo flota[MAX_VEHICULOS];
    // declaramos la variable
    Vehiculo miAuto;
    miAuto = generarVehiculoAleatorio(1);
    cout << "Placa: " << miAuto.placa << endl;
    cout << "Velocidad: " << miAuto.velocidad << endl;
return 0;
}