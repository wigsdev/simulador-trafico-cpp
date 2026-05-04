#include "motor.h"
#include "config.h"
#include "modelos.h"
#include "aleatorio.h"
#include <cstdlib>

void moverVehiculos(int grid[][COLUMNAS], Vehiculo flota[], Semaforo s) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = COLUMNAS - 1; j >= 0; j--) {  // reversa
            if (grid[i][j] > 0) { // existe un vehiculo
                int vehiculoID = grid[i][j];
                int pasos = flota[vehiculoID].velocidad; // velocidad define cuanto avanza
                
                for (int paso = 1; paso <= pasos; paso++) {
                    int siguienteCol = j + paso;

                    // regla de desaparicion: llegó al limite derecho.                    
                    if (siguienteCol >= COLUMNAS) {
                        grid[i][j] = 0;
                        break; // sale del bucle de pasos
                    
                    // regla del semaforo: frena en la linea fronteriza si está en rojo
                    } else if (siguienteCol == LINEA_SEMAFORO && s.estado == EstadoSemaforo::ROJO) {
                        // no hacer nada --> el auto espera
                        break;
                    
                    // regla de colision: celda siguiente ocupada --> se detiene 
                    } else if (grid[i][siguienteCol] != 0) {

                        // avanzar solo hasta el paso anterior
                        if (paso > 1) {
                            grid[i][j + paso - 1] = vehiculoID;
                            grid[i][j] = 0;                        
                        }
                        break;
                        
                    // regla de avance: ultimo paso libre --> mover definitivamente
                    } else if (paso == pasos) {
                        grid[i][siguienteCol] = vehiculoID;
                        grid[i][j] = 0;                    
                    }
                }
            }        
        }    
    }
}

void generarTrafico(int grid[][COLUMNAS], Vehiculo flota[], int &numVehiculos) {
    if (numVehiculos >= MAX_VEHICULOS - 1) {
        return; // flota llena, no generar mas
    }
    // probabilidad de aparición: ~30% por tick
    if (rand() % 10 < 3) {
        // elegir un carril de entrada al azar
        int filaNueva = rand() % FILAS;
        
        // solo si la celda de entrada está libre
        if (grid[filaNueva][0] == 0) {
            numVehiculos = numVehiculos + 1;
            flota[numVehiculos] = generarVehiculoAleatorio(numVehiculos);
            grid[filaNueva][0] = numVehiculos;        
        }
    }
}
