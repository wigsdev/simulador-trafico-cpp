#include "ui.h"
#include "config.h"
#include "modelos.h"
#include <iostream>

using namespace std;

void detectarCongestion(int grid[][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        int consecutivos = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            if (grid[i][j] > 0) {
                consecutivos = consecutivos + 1;
                if (consecutivos >= UMBRAL_CONGESTION) {
                    cout <<"⚠️ CONGESTION en carril " << i << endl;
                    consecutivos = 0; // reiniciar par seguir buscando               
                }         
            } else {
                consecutivos = 0; // resetear al encontrar celda vacia
            }
        }    
    }
}

void dibujarPantalla(int grid[][COLUMNAS], Semaforo s) {
    // mostrar estado del semaforo
    cout << "\n🚦 SEMAFORO: ";
    switch (s.estado) {
        case EstadoSemaforo::VERDE:
            cout << "VERDE";
            break;
        case EstadoSemaforo::AMARILLO:
            cout << "AMARILLO";
            break;
        case EstadoSemaforo::ROJO:
            cout << "ROJO";
            break;  
    }
    cout << " | Tiempo restante: " << s.tiempoRestante << " ticks" << endl;
    cout << "---------------------------------------------" << endl;
    
    // dibujar el grid fila por fila
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if(j == LINEA_SEMAFORO) {
                cout << "|"; // linea visual del semaforo
            }

            if (grid[i][j] == 0) {
                cout << "[ ]"; // celda vacia                            
            } else {
                cout << "[" << grid[i][j] << "]"; // id del vehiculo
            }
        }
        cout << endl;   
    }
}

