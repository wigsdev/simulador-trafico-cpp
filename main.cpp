#include "aleatorio.h"
#include <iostream>
#include <cstdlib>   // para srand() y rand()
#include <ctime>    // para time()
#include "config.h"

using namespace std;


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