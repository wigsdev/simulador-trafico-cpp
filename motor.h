#ifndef MOTOR_H
#define MOTOR_H
#include "config.h" // para COLUMNAS y LINEA_SEMAFORO
#include "modelos.h" // para vehiculo y semaforo

void moverVehiculos(int grid[][COLUMNAS], Vehiculo flota[], Semaforo s);
void generarTrafico(int grid[][COLUMNAS], Vehiculo flota[], int &numVehiculos);

#endif