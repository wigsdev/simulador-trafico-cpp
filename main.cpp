#include "modelos.h"
#include "semaforo.h"
#include "motor.h"
#include "ui.h"
#include "config.h"
#include <iostream>
#include <cstdlib>   // para srand() y rand()
#include <ctime>    // para time()

using namespace std;


int main() {
    
    srand(time(0));

    // inicializar componentes
    int grid[FILAS][COLUMNAS] = {0};
    Vehiculo flota[MAX_VEHICULOS];
    Semaforo sem = {EstadoSemaforo::VERDE, 5};
    int numVehiculos = 0;

    // loop de simulacion
    while (true) {
        // fase de salida ui
        // system("cls") // opcional para windows
        dibujarPantalla(grid, sem);
        detectarCongestion(grid);
        
        cout << "Presiona ENTER para el siguiente tick...";
        cin.get(); // Pausa manual por turno

        // fase de calculo

        actualizarSemaforo(sem);
        moverVehiculos(grid, flota, sem);
        generarTrafico(grid, flota, numVehiculos);
    }
    
    return 0;
}