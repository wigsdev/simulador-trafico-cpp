#include "motor.h"
#include "config.h"
#include "modelos.h"

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