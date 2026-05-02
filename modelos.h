#ifndef MODELOS_H
#define MODELOS_H

#include <string>

// usamos enum class para mayor seguridad
enum class TipoVehiculo { AUTO, BUS, MOTO, CAMION };

// usamos enum class para mayor seguridad.
enum class EstadoSemaforo { ROJO, AMARILLO, VERDE };

// estructura para el control del vehículo.
struct Vehiculo {
    int id;
    TipoVehiculo tipo;
    int velocidad;
    std::string placa;
};

// estructura para el control del semáforo.
struct Semaforo {
    EstadoSemaforo estado;
    int tiempoRestante;
};

#endif