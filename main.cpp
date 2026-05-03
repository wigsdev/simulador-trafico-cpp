#include "aleatorio.h"
#include <iostream>
#include <cstdlib>   // para srand() y rand()
#include <ctime>     // para time()

using namespace std;

int main() {
    
    srand(time(0));
    // declaramos la variable
    Vehiculo miAuto;
    miAuto = generarVehiculoAleatorio(1);
    cout << "Placa: " << miAuto.placa << endl;
    cout << "Velocidad: " << miAuto.velocidad << endl;
return 0;
}