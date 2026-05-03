#include "semaforo.h"
#include "modelos.h"
#include <iostream>
using namespace std;

void actualizarSemaforo(Semaforo &s) {
    s.tiempoRestante -= 1;
    if (s.tiempoRestante == 0) {
        switch (s.estado) {
        case EstadoSemaforo::VERDE:
            s.estado = EstadoSemaforo::AMARILLO;
            s.tiempoRestante = 2;
            break;
        case EstadoSemaforo::AMARILLO:
            s.estado = EstadoSemaforo::ROJO;
            s.tiempoRestante = 4;
            break;
        case EstadoSemaforo::ROJO:
            s.estado = EstadoSemaforo::VERDE;
            s.tiempoRestante = 5;
            break;
        default:
            cout << "Opción inválida";
        }    
    }
    
}
