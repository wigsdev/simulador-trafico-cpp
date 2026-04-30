PROYECTO 2 - Grupo 2: Simulador de Tráfico Vehicular

🧠 Contexto
Una ciudad quiere analizar el flujo vehicular en una intersección para mejorar la sincronización de semáforos.

🎯 Objetivo
Simular el comportamiento del tráfico en tiempo real.

📌 Requerimientos

Estructuras
Vehiculo: tipo, velocidad, placa
Semaforo: estado, tiempoRestante

Enumeraciones
enum TipoVehiculo {AUTO, BUS, MOTO, CAMION};
enum EstadoSemaforo {ROJO, AMARILLO, VERDE};

Matrices
Matriz que represente carriles (grid de tráfico)

Arreglos
Lista de vehículos en circulación

Números aleatorios
Generar vehículos
Cambios de velocidad
Eventos (atascos, accidentes)

Funcionalidades
Simular ciclos de semáforo
Mostrar estado del tráfico por iteración
Detectar congestión

Complejidad clave
Simulación por iteraciones (tipo “tick”)
Estado global cambiante