#ifndef UI_H
#define UI_H
#include "config.h" // para COLUMNAS y UMBRAL_CONGESTION
#include "modelos.h" // semaforo para dibujarPantalla

void dibujarPantalla(int grid[][COLUMNAS], Semaforo s);
void detectarCongestion(int grid[][COLUMNAS]);

#endif