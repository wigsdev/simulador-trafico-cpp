#include "aleatorio.h"
#include <cstdlib>
#include <ctime>
using namespace std;

std::string generarPlaca() {
    std::string placa = "";
    char letra1 = 'A' + (rand() % 26);
    placa += letra1;
    char letra2 = 'A' + (rand() % 26);
    placa += letra2;
    char letra3 = 'A' + (rand() % 26);
    placa += letra3;
    char guion = '-';
    placa += guion; 
    char digito1 = '0' + (rand() % 10);
    placa += digito1;
    char digito2 = '0' + (rand() % 10);
    placa += digito2;
    char digito3 = '0' + (rand() % 10);
    placa += digito3;
    return std::string(placa);
}

Vehiculo generarVehiculoAleatorio(int id) {
    Vehiculo v;

    v.id = id;
    v.tipo = TipoVehiculo(rand() % 4);
    v.velocidad = (rand() % 5) + 1;
    v.placa = generarPlaca();
    return v;

}