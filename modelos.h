#ifndef MODELOS_H
#define MODELOS_H

#include <string>

// usamos enum class para mayor seguridad
enum class TipoVehiculo {
    AUTO,
    BUS,
    AMBULANCIA
};

// estructura para representar un vehículo en la simulación
enum class EstadoSemaforo {
    ROJO,
    AMARILLO,
    VERDE
};

// estructura para el control del semáforo.
struct Vehiculo {
    int id;
    TipoVehiculo tipo;
    int posicion;
    int velocidad;
};

struct Semaforo {
    EstadoSemaforo estado;
    int tiempoRestante;
};

#endif