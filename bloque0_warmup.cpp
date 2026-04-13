#include <iostream>
using namespace std;

void resetSensor(int lectura){
    lectura = 0;
    cout << "Dentro de la funcion: " << lectura << endl;
}

void resetSensor2(int& lectura){
    lectura = 0;
    cout << "Dentro de la funcion: " << lectura << endl;
}

void aplicarIVA(double& precio, double iva){
    precio = precio * (1 + iva);
}

int main(){
    int temperatura = 38;
    cout << "Ejercicio 0.1" << endl;
    resetSensor(temperatura);
    cout << "En main, temperatura = " << temperatura << endl; // ? creo que queda 38

    cout << endl;

    int temperatura2 = 38;
    cout << "Ejercicio 0.2" << endl;
    resetSensor2(temperatura2);
    cout << "En main, temperatura = " << temperatura2 << endl; // ? aqui si queda 0

    cout << endl;

    double precio = 100.00;
    aplicarIVA(precio, 0.12);
    // aqui, precio vale ? 112.00
    cout << "Precio final: " << precio << endl;

    return 0;
}
