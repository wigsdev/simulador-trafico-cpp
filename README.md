<div align="center">

# 🚦 Simulador de Tráfico Vehicular (Proyecto 2 - Grupo 2)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Terminal](https://img.shields.io/badge/Console-App-4D4D4D?style=for-the-badge&logo=windows-terminal&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Status](https://img.shields.io/badge/Status-En_Desarrollo-success?style=for-the-badge)

*Simulación por terminal para estudiar y sincronizar flujos vehiculares a través de una arquitectura de Estado (Ticks) y Matrices 2D.*

</div>

---

## 🧠 Contexto
Una ciudad quiere analizar el flujo vehicular en una intersección para mejorar la sincronización de semáforos. Este proyecto nace como una herramienta matemática y visual para solventar dicho problema de congestión.

## 🎯 Objetivo
Simular el comportamiento del tráfico en tiempo real basándose estrictamente en:
- **Estructuras de Datos C++:** Enums para estados (Semáforo, Tipo de Auto) y Structs de encapsulación.
- **Grillas Dinámicas:** Uso de Matrices 2D para representar carriles físicos y arreglos para listas de vehículos activos.
- **Simulación por Ticks:** Gestión del estado global cambiante a través de iteraciones cíclicas de consola, abandonando la linealidad del código tradicional.
- **Motor Aleatorio:** Inyección de sucesos climáticos o congestiones (`<cstdlib>`) y generación autónoma de placas.

---

## 🚀 Instalación y Compilación

Requisito previo: Tener instalado el compilador `g++` (MinGW en Windows).

**1. Clonar el repositorio**
```bash
git clone https://github.com/wigsdev/nomada_bootcamp.git
cd nomada_bootcamp/project_2
```

**2. Compilación del entorno**
```bash
g++ main.cpp aleatorio.cpp -o simulador_trafico
```

**3. Ejecución**
```bash
./simulador_trafico
```

---

## 📜 Licencia

Este proyecto es de código abierto y se distribuye bajo la licencia **MIT**. Puedes consultar los detalles en el archivo [LICENSE](LICENSE) adjunto en este repositorio.

---

## 🧑‍💻 Autor

**[@wigsdev](https://github.com/wigsdev)**  
*Ingeniería de Software C++ | Bootcamp Nómada.*
